#include <iostream>
#include <fstream>
using namespace std;

const int MAX_CONTENT = 100;

// 1. Content Class
class Content
{
public:
    string title;
    string platform;
    string views;
    string status;

    Content()
    {
        title = "";
        platform = "";
        views = "";
        status = "";
    }

    Content(string t, string p, string v, string s)
    {
        title = t;
        platform = p;
        views = v;
        status = s;
    }

    void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

// 2. Add Content
void addContent()
{
    Content c;

    cin.ignore();

    cout << "Enter title: ";
    getline(cin, c.title);

    cout << "Enter platform: ";
    getline(cin, c.platform);

    cout << "Enter views: ";
    getline(cin, c.views);

    cout << "Enter status: ";
    getline(cin, c.status);

    ofstream file("content_list.txt", ios::app);

    file << "Title: " << c.title << endl;
    file << "Platform: " << c.platform << endl;
    file << "Views: " << c.views << endl;
    file << "Status: " << c.status << endl;
    file << "------------------------" << endl;

    file.close();

    cout << "\nContent added successfully!" << endl;
}

// 3. Display Content
void displayContent()
{
    Content contents[MAX_CONTENT];
    int count = 0;

    ifstream file("content_list.txt");

    if (!file)
    {
        cout << "No content file found!" << endl;
        return;
    }

    string line;

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

            getline(file, line);

            count++;
        }
    }

    file.close();

    if (count == 0)
    {
        cout << "No content found!" << endl;
        return;
    }

    cout << "\n===== Content List =====" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << "Title: " << contents[i].title
             << " | Platform: " << contents[i].platform
             << endl;
    }
}

// 4. Update Status
void updateStatus()
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

            getline(file, line);

            count++;
        }
    }

    file.close();

    if (count == 0)
    {
        cout << "No content found!" << endl;
        return;
    }

    cout << "\n===== Content List =====" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << contents[i].title
             << " | " << contents[i].platform
             << " | Status: " << contents[i].status
             << endl;
    }

    int choice;

    cout << "\nEnter content number to update: ";
    cin >> choice;

    if (choice < 1 || choice > count)
    {
        cout << "Invalid content number!" << endl;
        return;
    }

    cin.ignore();

    cout << "Enter new status: ";
    getline(cin, contents[choice - 1].status);

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

    cout << "Status updated successfully!" << endl;
}

// 5. Delete Content
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

            getline(file, line);

            count++;
        }
    }

    file.close();

    if (count == 0)
    {
        cout << "No content found!" << endl;
        return;
    }

    cout << "\n===== Content List =====" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << contents[i].title
             << " | " << contents[i].platform
             << " | Status: " << contents[i].status
             << endl;
    }

    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > count)
    {
        cout << "Invalid content number!" << endl;
        return;
    }

    // Shift elements
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

    // Updated list
    displayContent();
}

// Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n========== CONTENT MANAGEMENT ==========" << endl;
        cout << "1. Add Content" << endl;
        cout << "2. Display Content" << endl;
        cout << "3. Update Status" << endl;
        cout << "4. Delete Content" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContent();
            break;

        case 2:
            displayContent();
            break;

        case 3:
            updateStatus();
            break;

        case 4:
            deleteContent();
            break;

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
