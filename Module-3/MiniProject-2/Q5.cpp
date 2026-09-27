#include <iostream>
#include <fstream>
using namespace std;

const int MAX_CONTENT = 100;

struct Content
{
    string title;
    string platform;
    string views;
    string status;
};

void displayContent()
{
    ifstream file("content_list.txt");

    if (!file)
    {
        cout << "File open nahi hui!" << endl;
        return;
    }

    string line;
    string title, platform;
    int count = 0;

    cout << "\n===== Content List =====" << endl;

    while (getline(file, line))
    {
        if (line.rfind("Title: ", 0) == 0)
        {
            title = line.substr(7);
        }
        else if (line.rfind("Platform: ", 0) == 0)
        {
            platform = line.substr(10);

            count++;

            cout << count << ". "
                 << "Title: " << title
                 << " | Platform: " << platform << endl;
        }
    }

    file.close();
}

void deleteContent()
{
    Content contents[MAX_CONTENT];
    int count = 0;

    ifstream file("content_list.txt");

    if (!file)
    {
        cout << "File open nahi hui!" << endl;
        return;
    }

    string line;

    // Read all content
    while (getline(file, line))
    {
        if (line.rfind("Title: ", 0) == 0)
        {
            contents[count].title = line.substr(7);

            getline(file, line);
            contents[count].platform = line.substr(10);

            getline(file, line);
            contents[count].views = line.substr(7);

            getline(file, line);
            contents[count].status = line.substr(8);

            getline(file, line); // separator

            count++;
        }
    }

    file.close();

    if (count == 0)
    {
        cout << "No content found!" << endl;
        return;
    }

    // Display list
    cout << "\n===== Content List =====" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << contents[i].title
             << " | " << contents[i].platform
             << " | Status: " << contents[i].status << endl;
    }

    // Ask which content to delete
    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > count)
    {
        cout << "Invalid content number!" << endl;
        return;
    }

    // Shift items left
    for (int i = choice - 1; i < count - 1; i++)
    {
        contents[i] = contents[i + 1];
    }

    count--;

    // Overwrite file
    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++)
    {
        outFile << "Title: " << contents[i].title << endl;
        outFile << "Platform: " << contents[i].platform << endl;
        outFile << "Views: " << contents[i].views << endl;
        outFile << "Status: " << contents[i].status << endl;
        outFile << "------------------------" << endl;
    }

    outFile.close();

    cout << "\nContent deleted successfully!" << endl;

    // Display updated list
    displayContent();
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Content Management =====" << endl;
        cout << "1. Display Content" << endl;
        cout << "2. Delete Content" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            displayContent();
        }
        else if (choice == 2)
        {
            deleteContent();
        }
        else if (choice == 3)
        {
            cout << "Exiting..." << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}
