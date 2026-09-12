#include <stdio.h>
void swapPlaylistCounts(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 25;
    int y = 40;
    printf("Before swapping:\n");
    printf("x: %d songs\n", x);
    printf("y: %d songs\n", y);
    swapPlaylistCounts(&x, &y);
    printf("\nAfter swapping:\n");
    printf("x: %d songs\n", x);
    printf("y: %d songs\n", y);
    return 0;
}
