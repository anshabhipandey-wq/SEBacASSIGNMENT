#include <stdio.h>
void incrementFollowers(int *followers, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}
int main()
{
	int i;
    int followers[5] = {1200, 2500, 1800, 3200, 1500};
    incrementFollowers(followers, 5);
    printf("Updated follower counts:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Friend %d: %d followers\n", i + 1, followers[i]);
    }
    return 0;
}
