#include <stdio.h>
int main() {
    FILE *file;
    char song[100];
    file = fopen("playlist.txt", "r");
    if (file == NULL) {
        printf("Error opening playlist.txt!\n");
        return 1;
    }
    while (fgets(song, sizeof(song), file) != NULL) {
        printf("%s", song);
    }
    fclose(file);
    return 0;
}

