 #include <stdio.h>
#include <string.h>
struct MovieShow {
    char movie[100];
    int screen;
    struct Time {
        int hours;
        int minutes;
    } time;
};
int main() {
    struct MovieShow show = {
        "Avengers: Endgame",
        3,
        {18, 30}
    };
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
          show.movie,
           show.screen,
           show.time.hours,
           show.time.minutes);
    return 0;
}

