#include <stdio.h>
#include <math.h>

int main() {
    float hours[7];
    float total = 0.0;
    float average;
    int highestDay = 0;
    int i,j;

    // Accept study hours for 7 days
    for (i = 0; i < 7; i++) {
        do {
            printf("Enter study hours for Day %d (0-24): ", i + 1);
            scanf("%f", &hours[i]);

            if (hours[i] < 0 || hours[i] > 24) {
                printf("Invalid entry. Please enter a value between 0 and 24.\n");
            }

        } while (hours[i] < 0 || hours[i] > 24);

        total += hours[i];

        // Find day with highest study hours
        if (hours[i] > hours[highestDay]) {
            highestDay = i;
        }
    }

    average = total / 7;

    // Performance summary
    printf("\n--- Weekly Performance Summary ---\n");
    printf("Weekly Total: %.2f hours\n", total);
    printf("Daily Average: %.2f hours\n", average);
    printf("Highest Study Hours: Day %d (%.2f hours)\n",
           highestDay + 1, hours[highestDay]);

    // Visual bars
    printf("\nStudy Hours Chart:\n");

    for (i = 0; i < 7; i++) {
        int stars = (int)hours[i];  // Truncate to nearest lower integer

        printf("Day %d: ", i + 1);

        for (j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

