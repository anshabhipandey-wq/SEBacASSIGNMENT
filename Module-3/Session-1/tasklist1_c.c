#include <stdio.h>

char tasks[5][50];
int status[5];
int count = 0;

void markTaskDone(int index) {
    status[index] = 1;
}

int main() {
    int i, index;

    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++) {
        printf("Task %d: ", i + 1);
        scanf("%s", tasks[i]);
        status[i] = 0;
        count++;
    }

    printf("\nEnter task number to mark as DONE: ");
    scanf("%d", &index);

    markTaskDone(index - 1);

    printf("\nUpdated Task List:\n");

    for (i = 0; i < count; i++) {
        if (status[i] == 1)
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        else
            printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}

