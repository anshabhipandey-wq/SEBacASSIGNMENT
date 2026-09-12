#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int max, min;
    long long sum = 0;
    float mean;
    int i,j;

    // Accept exactly 10 integers
    for (i = 0; i < SIZE; i++) {
        printf("Enter integer %d: ", i + 1);

        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }

    // Initialize minimum and maximum
    min = numbers[0];
    max = numbers[0];

    // Find minimum, maximum and sum
    for (i = 0; i < SIZE; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }

        if (numbers[i] > max) {
            max = numbers[i];
        }

        sum += numbers[i];
    }

    // Calculate arithmetic mean
    mean = (float)sum / SIZE;

    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mean: %.2f\n", mean);

    // Bubble sort in ascending order
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted list: ");

    for (i = 0; i < SIZE; i++) {
        printf("%d", numbers[i]);

        if (i < SIZE - 1) {
            printf(" ");
        }
    }

    printf("\n");

    // Compare distances from mean to minimum and maximum
    long double distanceMin = (long double)mean - min;
    long double distanceMax = (long double)max - mean;

    if (distanceMin < distanceMax) {
        printf("The mean is closer to the minimum.\n");
    }
    else if (distanceMax < distanceMin) {
        printf("The mean is closer to the maximum.\n");
    }
    else {
        printf("The mean is exactly midway between the minimum and maximum.\n");
    }

    return 0;
}

