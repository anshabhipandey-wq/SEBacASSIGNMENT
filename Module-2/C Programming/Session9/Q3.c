#include <stdio.h>
float calculateAverage(int orders[])
{
    int sum = 0,i;
    for(i = 0; i < 7; i++)
    {
        sum = sum + orders[i];
    }
    return sum / 7.0;
}
int main()
{
    int dailyOrders[7] = {250, 180, 300, 220, 150, 350, 200};
    float average = calculateAverage(dailyOrders);
    printf("Average weekly Zomato spend = Rs:%.2f\n", average);
    return 0;
}
