#include <stdio.h>
#include <stdlib.h>

#define DAYS 7
#define FILE_NAME "music_log.txt"

// Function declarations
void logMinutes(int minutes[]);
void saveToFile(int minutes[]);
void loadFromFile(int minutes[]);
void weeklyReport(int minutes[]);
void resetData(int minutes[]);

int main()
{
    int minutes[DAYS] = {0};
    int choice;

    // Load previously saved data when program starts
    loadFromFile(minutes);

    printf("=====================================\n");
    printf("       MUSIC LISTENING LOGGER\n");
    printf("=====================================\n");

    do
    {
        printf("\n----------- MAIN MENU -----------\n");
        printf("1. Log New Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");
        printf("---------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                logMinutes(minutes);
                saveToFile(minutes);
                break;

            case 2:
                weeklyReport(minutes);
                break;

            case 3:
                resetData(minutes);
                break;

            case 4:
                printf("\nThank you for using Music Listening Logger!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}


/* Function to enter listening minutes */
void logMinutes(int minutes[])
{
    int i;

    printf("\n===== Enter Listening Minutes =====\n");

    for (i = 0; i < DAYS; i++)
    {
        printf("Enter minutes listened on Day %d: ", i + 1);
        scanf("%d", &minutes[i]);

        // Prevent negative values
        if (minutes[i] < 0)
        {
            printf("Minutes cannot be negative. Setting to 0.\n");
            minutes[i] = 0;
        }
    }

    printf("\nWeekly listening data entered successfully!\n");
}


/* Function to save data to file */
void saveToFile(int minutes[])
{
    FILE *file;
    int i;

    file = fopen(FILE_NAME, "w");

    if (file == NULL)
    {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    for (i = 0; i < DAYS; i++)
    {
        fprintf(file, "%d\n", minutes[i]);
    }

    fclose(file);

    printf("Data saved successfully to %s\n", FILE_NAME);
}


/* Function to load data from file */
void loadFromFile(int minutes[])
{
    FILE *file;
    int i;

    file = fopen(FILE_NAME, "r");

    // If file does not exist, start with empty data
    if (file == NULL)
    {
        return;
    }

    for (i = 0; i < DAYS; i++)
    {
        if (fscanf(file, "%d", &minutes[i]) != 1)
        {
            minutes[i] = 0;
        }
    }

    fclose(file);
}


/* Function to calculate and display weekly report */
void weeklyReport(int minutes[])
{
    int i;
    int total = 0;
    int highest = minutes[0];
    double average;

    printf("\n========== WEEKLY REPORT ==========\n");

    for (i = 0; i < DAYS; i++)
    {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);

        total += minutes[i];

        if (minutes[i] > highest)
        {
            highest = minutes[i];
        }
    }

    average = (double)total / DAYS;

    printf("-----------------------------------\n");
    printf("Total Listening   : %d minutes\n", total);
    printf("Average Listening : %.2f minutes/day\n", average);
    printf("Highest Listening : %d minutes\n", highest);
    printf("===================================\n");
}


/* Function to reset weekly data */
void resetData(int minutes[])
{
    char confirmation;
    int i;

    printf("\nAre you sure you want to reset all weekly data? (Y/N): ");
    scanf(" %c", &confirmation);

    if (confirmation == 'Y' || confirmation == 'y')
    {
        // Clear the array
        for (i = 0; i < DAYS; i++)
        {
            minutes[i] = 0;
        }

        // Clear the contents of the file
        FILE *file = fopen(FILE_NAME, "w");

        if (file != NULL)
        {
            fclose(file);
        }
        else
        {
            printf("Warning: Could not clear the file.\n");
        }

        printf("\nAll weekly data has been reset successfully.\n");
    }
    else
    {
        printf("\nReset cancelled. Your data is safe.\n");
    }
}
