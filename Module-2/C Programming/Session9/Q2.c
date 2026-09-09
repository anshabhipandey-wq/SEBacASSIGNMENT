#include <stdio.h>
int main()
{
	int i,j;
    int playlistRatings[3][5] =
    {
        {5, 4, 5, 3, 4},
        {4, 5, 3, 5, 4},
        {3, 4, 5, 4, 5}
    };
    for(i = 0; i < 3; i++)
    {
        printf("Playlist %d: ", i + 1);

        for(j = 0; j < 5; j++)
        {
            printf("%d ", playlistRatings[i][j]);
        }
        printf("\n");
    }
    return 0;
}
