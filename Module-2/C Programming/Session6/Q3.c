#include <stdio.h>

int main()
{
    int choice;
    do
    {
        printf("Guess the song:\n");
        printf("1. Kesariya\n");
        printf("2. Chaleya\n");
        printf("3. Apna Bana Le\n");
        printf("Enter song number: ");
        scanf("%d", &choice);
    } while (choice != 1);
    printf("Correct! You guessed the song!");
    return 0;
}
