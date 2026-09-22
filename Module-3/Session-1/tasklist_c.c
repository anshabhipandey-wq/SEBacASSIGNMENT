#include <stdio.h>

char tasks[5][50];
int count = 0;

int main() {
    int i;

    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++) {
        printf("Task %d: ", i + 1);
        scanf("%s", tasks[i]);
        count++;
    }

    printf("\nAll Tasks:\n");

    for (i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}

