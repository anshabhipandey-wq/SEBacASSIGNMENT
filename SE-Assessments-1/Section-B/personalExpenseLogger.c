#include <stdio.h>
#include <string.h>

#define MAX_EXPENSES 10

struct Expense {
    char category[30];
    float amount;
};

int main() {
    struct Expense expenses[MAX_EXPENSES];
    int count = 0;
    int choice;
    int i;
    float total;

    do {
        printf("\n===== Expense Tracker =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Clear newline

        switch (choice) {

            case 1:
                if (count >= MAX_EXPENSES) {
                    printf("Expense limit reached. Cannot add more entries.\n");
                } else {
                    printf("Enter category: ");
                    fgets(expenses[count].category,
                          sizeof(expenses[count].category), stdin);

                    // Remove newline
                    expenses[count].category[
                        strcspn(expenses[count].category, "\n")
                    ] = '\0';

                    printf("Enter amount: ");
                    scanf("%f", &expenses[count].amount);
                    getchar();  // Clear newline

                    if (expenses[count].amount < 0) {
                        printf("Amount cannot be negative.\n");
                    } else {
                        count++;
                        printf("Expense added successfully.\n");
                    }
                }
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo expenses logged yet.\n");
                } else {
                    total = 0.0;

                    printf("\n===== All Expenses =====\n");
                    printf("%-5s %-30s %10s\n",
                           "No.", "Category", "Amount");
                    printf("-----------------------------------------------\n");

                    for (i = 0; i < count; i++) {
                        printf("%-5d %-30s %10.2f\n",
                               i + 1,
                               expenses[i].category,
                               expenses[i].amount);

                        total += expenses[i].amount;
                    }

                    printf("-----------------------------------------------\n");
                    printf("%-35s %10.2f\n", "Running Total:", total);
                }
                break;

            case 3: {
                FILE *file = fopen("expenses.txt", "w");

                if (file == NULL) {
                    printf("Error: Could not open expenses.txt for writing.\n");
                    return 1;
                }

                for (i = 0; i < count; i++) {
                    fprintf(file, "%s, %.2f\n",
                            expenses[i].category,
                            expenses[i].amount);
                }

                fclose(file);

                printf("\nAll expenses saved to expenses.txt.\n");
                printf("Exiting program...\n");
                break;
            }

            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}

