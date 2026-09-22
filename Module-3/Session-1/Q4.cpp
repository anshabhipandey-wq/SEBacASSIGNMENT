#include <iostream>
using namespace std;

class Task {
public:
    char title[50];
    bool done;

    Task() {
        done = false;
    }

    Task(const char t[]) {
        int i = 0;
        while (t[i] != '\0') {
            title[i] = t[i];
            i++;
        }
        title[i] = '\0';
        done = false;
    }
};

class TaskList {
    Task tasks[10];
    int count;

public:
    TaskList() {
        count = 0;
    }

    void addTask(const char title[]) {
        if (count < 10) {
            tasks[count] = Task(title);
            count++;
        }
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < count) {
            tasks[index].done = true;
        }
    }

    void showTasks() {
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". " << tasks[i].title;

            if (tasks[i].done)
                cout << " - Done";
            else
                cout << " - Pending";

            cout << endl;
        }
    }
};

int main() {
    TaskList list;

    list.addTask("Complete assignment");
    list.addTask("Study C++");
    list.addTask("Go for a walk");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}

