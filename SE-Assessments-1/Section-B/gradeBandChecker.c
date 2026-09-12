#include <stdio.h>

int main(void) {
    float percentage;

    printf("Enter student's percentage: ");

    if (scanf("%f", &percentage) != 1) {
        printf("Error: Invalid input. Please enter a numeric percentage.\n");
        return 1;
    }

    if (percentage < 0 || percentage > 100) {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 1;
    }

    if (percentage >= 90) {
        printf("Grade: A \nExcellent work! Keep it up.\n");
    } else if (percentage >= 75) {
        printf("Grade: B \nGood work! Keep pushing.\n");
    } else if (percentage >= 60) {
        printf("Grade: C \nNice effort! Keep improving.\n");
    } else if (percentage >= 45) {
        printf("Grade: D \nYou can do better! Keep working hard.\n");
    } else {
        printf("Grade: F \nDon't give up! Learn and try again.\n");
    }

    return 0;
}

