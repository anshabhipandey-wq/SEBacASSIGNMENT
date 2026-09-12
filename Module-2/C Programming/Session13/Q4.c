#include <stdio.h>
#include <string.h>
int main() {
    FILE *file;
    char song[100];
    file = fopen("playlist.txt", "r");
    if (file == NULL) {
        printf("File open nahi hui!\n");
        return 1;
    }
    printf("Songs containing 'love':\n");
    while (fgets(song, sizeof(song), file) != NULL) {
        if (strstr(song, "love") != NULL ||
            strstr(song, "Love") != NULL ||
            strstr(song, "LOVE") != NULL ||
            strstr(song, "LoVe") != NULL) {
            printf("%s", song);
        }
    }
    fclose(file);
    return 0;
}

