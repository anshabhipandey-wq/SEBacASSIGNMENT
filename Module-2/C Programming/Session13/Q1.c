#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("playlist.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "I Love You - The Weeknd\n");
    fprintf(fp, "Shape of You - Ed Sheeran\n");
    fprintf(fp, "Perfect - Ed Sheeran\n");
    fclose(fp);
    printf("Songs written to playlist.txt successfully.\n");
    return 0;
}

