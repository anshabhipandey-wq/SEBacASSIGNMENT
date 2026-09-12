#include <stdio.h>
#include <string.h>

#define SUBJECTS 3
#define DAYS 7

struct StudyLog {
    char subject[40];
    float hours[DAYS];
};

// Function to calculate and display weekly totals and daily averages
void displaySubjectSummary(struct StudyLog logs[], int n) {
	int i,j;
    printf("\n========== Weekly Subject Summary ==========\n");
    printf("%-25s %-15s %-15s\n",
           "Subject", "Weekly Total", "Daily Average");
    printf("--------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        float total = 0.0;

        for (j = 0; j < DAYS; j++) {
            total += logs[i].hours[j];
        }

        printf("%-25s %-15.2f %-15.2f\n",
               logs[i].subject,
               total,
               total / DAYS);
    }
}

// Function to display progress chart
void displayProgressChart(struct StudyLog logs[], int n) {
	int day, i, j;
    printf("\n========== Daily Progress Chart ==========\n");

    for (day = 0; day < DAYS; day++) {
        printf("\nDay %d:\n", day + 1);

        for (i = 0; i < n; i++) {
            int dots = (int)logs[i].hours[day];

            printf("%-20s ", logs[i].subject);

            for (j = 0; j < dots; j++) {
                printf("•");
            }

            printf(" %.2f hours\n", logs[i].hours[day]);
        }
    }
}

// Function to save records to a file
void saveToFile(struct StudyLog logs[], int n) {
	int i,j;
    FILE *file = fopen("productivity_log.txt", "w");

    if (file == NULL) {
        printf("Error: Could not open productivity_log.txt\n");
        return;
    }

    for (i = 0; i < n; i++) {
        fprintf(file, "%s", logs[i].subject);

        for (j = 0; j < DAYS; j++) {
            fprintf(file, ", %.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("\nAll records saved to productivity_log.txt successfully.\n");
}

int main() {
    struct StudyLog logs[SUBJECTS] = {
        {"Mathematics", {0, 0, 0, 0, 0, 0, 0}},
        {"Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"Physics", {0, 0, 0, 0, 0, 0, 0}}
    };

    int choice;
    int day;

    do {
        printf("\n============================================\n");
        printf("       STUDENT PRODUCTIVITY TRACKER\n");
        printf("============================================\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter today's day number (1-7): ");
                scanf("%d", &day);
                int i;

                if (day < 1 || day > 7) {
                    printf("Invalid day. Please enter a number from 1 to 7.\n");
                    break;
                }

                printf("\nEnter study hours for Day %d:\n", day);

                for (i = 0; i < SUBJECTS; i++) {
                    do {
                        printf("%s: ", logs[i].subject);
                        scanf("%f", &logs[i].hours[day - 1]);

                        if (logs[i].hours[day - 1] < 0 ||
                            logs[i].hours[day - 1] > 24) {
                            printf("Invalid hours. Enter a value between 0 and 24.\n");
                        }

                    } while (logs[i].hours[day - 1] < 0 ||
                             logs[i].hours[day - 1] > 24);
                }

                printf("\nStudy hours recorded successfully!\n");
                break;

            case 2:
                displaySubjectSummary(logs, SUBJECTS);
                displayProgressChart(logs, SUBJECTS);
                break;

            case 3:
                saveToFile(logs, SUBJECTS);
                printf("Exiting Student Productivity Tracker...\n");
                break;

            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}

