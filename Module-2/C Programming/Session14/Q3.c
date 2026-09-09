#include <stdio.h>
// Function to format the followers count
void formatFollowersCount(int count) {
    // If the count is less than 1000,
    // print the number as it is.
    if (count < 1000) {
        printf("%d", count);
    }
    // If the count is 1000 or more but less than 1 million,
    // convert it into thousands (K).
    else if (count < 1000000) {
        printf("%.1fK", count / 1000.0);
    }
    // If the count is 1 million or more,
    // convert it into millions (M).
    else {
        printf("%.1fM", count / 1000000.0);
    }
}
int main() {
    // Test the function with different follower counts.
    formatFollowersCount(1500);
    printf("\n");
    formatFollowersCount(1200000);
    printf("\n");
    formatFollowersCount(850);
    printf("\n");
    return 0;
}

