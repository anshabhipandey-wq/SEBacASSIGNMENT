#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("my_fav_songs.txt");
    string song;
    while (getline(file, song))
    {
        cout <<song<<"\n";
    }

    file.close();
    return 0;
}
