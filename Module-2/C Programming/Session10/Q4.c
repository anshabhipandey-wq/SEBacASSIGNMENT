#include <stdio.h>
#include <string.h>
int main()
{
    char fullName[100];
    char username[100];
    char firstFive[6];
    printf("Enter your full name: ");
    scanf("%99[^\n]", fullName);
    if (strlen(fullName) < 5)
    {
        strcpy(username, fullName);
    }
    else
    {
        strncpy(firstFive, fullName, 5);
        firstFive[5] = '\0';

        strcpy(username, firstFive);
    }
    printf("Generated Username: %s\n", username);
    return 0;
}
