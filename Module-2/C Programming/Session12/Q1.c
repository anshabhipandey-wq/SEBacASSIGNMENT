#include <stdio.h>
struct Playlist {
    char title[100];
    char artist[100];
    int duration;
};
int main() {
    struct Playlist favsong = {
        "Shape of You",
        "Ed Sheeran",
        233
    };
    printf("Title: %s\n", favsong.title);
    printf("Artist: %s\n", favsong.artist);
    printf("Duration: %d seconds\n", favsong.duration);
    return 0;
}

