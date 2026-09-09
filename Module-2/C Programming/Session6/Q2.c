#include <stdio.h>
int main()
{
    int choice;
    char newTeam[50];
    while (1)
    {
        printf("\n--- IPL Team Menu ---\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\n1. Mumbai Indians\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Royal Challengers Bengaluru\n");
        }
        else if (choice == 2)
        {
            printf("Enter new team name: ");
            scanf(" %[^\n]", newTeam);
            printf("New team added: %s\n", newTeam);
        }
        else if (choice == 3)
        {
            printf("Exiting program...\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
