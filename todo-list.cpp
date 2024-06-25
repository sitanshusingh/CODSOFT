#include <iostream>
#include <vector>
#include <string>
using namespace std;

void displayMenu() {
    cout << "To-Do List Program\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

void addTask(vector<string>& tasks) {
    cin.ignore(); // Clear the input buffer
    string task;
    cout << "Enter the task: ";
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list.\n";
    } else {
        cout << "To-Do List:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << "\n";
        }
    }
}

void deleteTask(vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to delete.\n";
        return;
    }

    viewTasks(tasks);
    cout << "Enter the number of the task to delete: ";
    int taskNum;
    cin >> taskNum;

    if (taskNum < 1 || taskNum > tasks.size()) {
        cout << "Invalid task number.\n";
    } else {
        tasks.erase(tasks.begin() + taskNum - 1);
        cout << "Task deleted successfully.\n";
    }
}

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        cout << "\n"; 
    }
}
