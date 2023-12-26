#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task {
private:
  string description;
  bool completed;

public:
  Task(const string& desc) : description(desc), completed(false) {}

  string getDescription() {
    return description;
  }

  bool isCompleted() {
    return completed;
  }

  void markAsCompleted() {
    completed = true;
  }
};

class TaskManager {
private:
  vector<Task> tasks;

public:
  void addTask() {
    string desc;
    cout << "Enter task description: ";
    getline(cin, desc);

    Task newTask(desc);
    tasks.push_back(newTask);
    cout << "Task added: " << newTask.getDescription() << endl;
  }

  void displayTasks() {
    if (tasks.empty()) {
      cout << "No tasks in the manager." << endl;
    } else {
      cout << "Tasks in the manager:" << endl;
      for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].getDescription();
        if (tasks[i].isCompleted()) {
          cout << " (Completed)";
        }
        cout << endl;
      }
    }
  }

  void completeTask() {
    if (tasks.empty()) {
      cout << "No tasks to complete." << endl;
      return;
    }

    int index;
    cout << "Enter the task number to mark as completed: ";
    cin >> index;

    if (index > 0 && index <= static_cast<int>(tasks.size())) {
      tasks[index - 1].markAsCompleted();
      cout << "Task marked as completed: " << tasks[index - 1].getDescription() << endl;
    } else {
      cout << "Invalid task number." << endl;
    }
  }
};

int main() {
  cout << "+----------------------------------------+\n";
  cout << "|       MY TO DO LIST       |\n";
  cout << "+----------------------------------------+\n";

  TaskManager myTaskManager;
  char choice;

  do {
    cout << "\nTask Manager Menu:\n";
    cout << "1. Add Task\n";
    cout << "2. Display Tasks\n";
    cout << "3. Complete Task\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
      case '1':
        cin.ignore();
        myTaskManager.addTask();
        break;

      case '2':
        myTaskManager.displayTasks();
        break;

      case '3':
        myTaskManager.completeTask();
        break;

      case '4':
        cout << "+----------------------------------------+\n";
        cout << "| Exiting Task Manager. Goodbye!     |\n";
        cout << "+----------------------------------------+\n";
        break;

      default:
        cout << "Invalid choice. Please enter a valid option.\n";
    }

  } while (choice != '4');

  return 0;
}