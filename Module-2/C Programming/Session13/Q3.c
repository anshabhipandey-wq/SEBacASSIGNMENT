#include <stdio.h>
int main() {
    FILE *file;
    file = fopen("playlist.txt", "a");
    if (file == NULL) {
        printf("Error opening playlist.txt!\n");
        return 1;
    }
    fprintf(file, "Stay - Justin Bieber\n");
    fprintf(file, "Levitating - Dua Lipa\n");
    fclose(file);
    printf("Two songs added successfully.\n");
    return 0;
}

