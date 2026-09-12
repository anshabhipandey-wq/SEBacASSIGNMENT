#include <stdio.h>

int main() {
	int i,j;
    int numbers[10];
    int max, min;
    float mean;
    int sum = 0;

    // Accept exactly 10 integers
    for (i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize minimum and maximum
    min = numbers[0];
    max = numbers[0];

    // Find min, max and sum
    for (i = 0; i < 10; i++) {
        if (numbers[i] < min)
            min = numbers[i];

        if (numbers[i] > max)
            max = numbers[i];

        sum += numbers[i];
    }

    mean = sum / 10.0;

    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mean: %.2f\n", mean);

    // Sort using bubble sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted list: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Determine which endpoint the mean is closer to
    float distanceMin = mean - min;
    float distanceMax = max - mean;

    if (distanceMin < distanceMax)
        printf("The mean is closer to the minimum.\n");
    else if (distanceMax < distanceMin)
        printf("The mean is closer to the maximum.\n");
    else
        printf("The mean is exactly midway between the minimum and maximum.\n");

    return 0;
}

