#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string songs[10];
    int count;

    Playlist() {
        count = 0;
    }

    void addSong(string songTitle) {
        songs[count] = songTitle;
        count++;
    }

    void showSongs() {
        for (int i = 0; i < count; i++) {
            cout << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p;

    p.name = "My Playlist";

    p.addSong("Perfect");
    p.addSong("Believer");
    p.addSong("Shape of You");

    cout << "Songs in Playlist:" << endl;
    p.showSongs();

    return 0;
}

