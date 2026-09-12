#include <stdio.h>
int main()
{
    int orders[5] = {250, 180, 320, 150, 400};
    int *ptr = orders;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Order amount: Rs:%d\n", *(ptr + i));
        printf("Memory address: %p\n\n", (void *)(ptr + i));
    }
    return 0;
}
