#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main() {
    Playlist p;

    p.name = "My Songs";
    p.createdOn = "19-09-2026";
    p.isPublic = true;

    cout << "Name: " << p.name << endl;
    cout << "Created On: " << p.createdOn << endl;
    cout << "Public: " << p.isPublic << endl;

    return 0;
}

