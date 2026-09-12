#include <stdio.h>
int main()
{
	int i,j;
    int cricketScores[3][2] =
    {
        {180, 165},
        {150, 175},
        {210, 198}
    };
    for(i = 0; i < 3; i++)
    {
        int highest = cricketScores[i][0];

        for(j = 1; j < 2; j++)
        {
            if (cricketScores[i][j] > highest)
            {
                highest = cricketScores[i][j];
            }
        }
        printf("Match %d highest score: %d\n", i + 1, highest);
    }
    return 0;
}
