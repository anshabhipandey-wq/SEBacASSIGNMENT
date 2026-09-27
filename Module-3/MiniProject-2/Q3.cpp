#include <iostream>
#include <fstream>
using namespace std;
void displayContent()
{
    ifstream file("content_list.txt");
    if (!file)
    {
        cout << "File could not be opened." << endl;
        return;
    }

    string line;
    int count = 1;

    while (getline(file, line))
    {
        cout << count << ". " << line << "\n";
        count++;
    }
    file.close();
}
int main()
{
    displayContent();
    return 0;
}
