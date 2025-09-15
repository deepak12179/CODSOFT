#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) {
        description = desc;
        completed = false;
    }
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(string desc) {
        tasks.push_back(Task(desc));
        cout << "Task added successfully!\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks available.\n";
            return;
        }
        cout << "\n--- To-Do List ---\n";
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i].description 
                 << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
        }
    }

    void markTaskCompleted(int index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number!\n";
            return;
        }
        tasks[index - 1].completed = true;
        cout << "Task marked as completed!\n";
    }

    void removeTask(int index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number!\n";
            return;
        }
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully!\n";
    }
};

int main() {
    ToDoList todo;
    int choice;
    string taskDesc;
    int index;

    do {
        cout << "\n===== To-Do List Manager =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To avoid input buffer issues

        switch (choice) {
        case 1:
            cout << "Enter task description: ";
            getline(cin, taskDesc);
            todo.addTask(taskDesc);
            break;
        case 2:
            todo.viewTasks();
            break;
        case 3:
            todo.viewTasks();
            cout << "Enter task number to mark completed: ";
            cin >> index;
            todo.markTaskCompleted(index);
            break;
        case 4:
            todo.viewTasks();
            cout << "Enter task number to remove: ";
            cin >> index;
            todo.removeTask(index);
            break;
        case 5:
            cout << "Exiting... Goodbye!\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
