#include <iostream>
//#include <string>
using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    // Constructor
    Task(string taskTitle) {
        title = taskTitle;
        isDone = false;
    }

    // Marks the task as completed
    void markDone() {
        isDone = true;
    }

    // Displays the task and its status
    void display() {
        cout << "Task: " << title << endl;
        cout << "Status: " << (isDone ? "Done" : "Not Done") << endl;
    }
};

int main() {
    Task task("Complete C++ assignment");

    task.display();

    cout << "\nAfter marking the task as done:\n";
    task.markDone();
    task.display();

    return 0;
}

