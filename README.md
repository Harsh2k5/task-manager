The following algorithm follows the functionality of the C++ code :
1. Task Class:
- Define a class `Task` with private members `description` (string) and `completed` (bool).
- Implement a constructor that initializes the `description` with the provided string and sets
`completed` to false.
- Implement public member functions:
- `getDescription()` returns the task description.
- `isCompleted()` returns true if the task is completed, false otherwise.
- `markAsCompleted()` sets the `completed` flag to true.
2. TaskManager Class:
- Define a class `TaskManager` with a private member `tasks` (a vector of `Task` objects).
- Implement public member functions:
- `addTask()`:
- Prompt the user for a task description.
- Create a new `Task` object with the entered description and push it onto the `tasks`
vector.
- Display a message indicating the task has been added.
- `displayTasks()`:
- Check if the `tasks` vector is empty.
- If empty, print a message indicating there are no tasks.
- If not empty, iterate through the `tasks` vector and display each task's description and
completion status.
- `completeTask()`:
- Check if the `tasks` vector is empty.
- If empty, print a message indicating there are no tasks to complete.
- If not empty, prompt the user to enter the task number to mark as completed.
- Validate the entered index, mark the corresponding task as completed, and display a
completion message.
3. Main Function:
- Display a title for the Task Manager.
- Create an instance of `TaskManager` called `myTaskManager`.
- Declare a variable `choice` of type char.
- Use a do-while loop to display a menu and accept user input until the user chooses to quit.
- Inside the loop, use a switch statement to execute the corresponding functionality based
on the user's choice.
- For each case:
- Case '1': Call `myTaskManager.addTask()`.
- Case '2': Call `myTaskManager.displayTasks()`.
- Case '3': Call `myTaskManager.completeTask()`.
- Case '4': Print a goodbye message and exit the loop.
- Default: Print an invalid choice message.
- Repeat the loop until the user chooses to quit.
4. Exit Program:
- Display a closing message.
This algorithm describes the high-level logic of the provided code, outlining the structure and
functionality of the `Task` and `TaskManager` classes, as well as the main program flow.
