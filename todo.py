tasks = []


def add_task(task):
    tasks.append(task) 
    print(f"Task '{task}' added!")


def show_tasks():
    if not tasks:
        print("No tasks available.")
    else:
        print("To-Do List:")
        for i, task in enumerate(tasks, 1):
            print(f"{i}. {task}")


add_task("Buy groceries")
add_task("Complete homework")
show_tasks()
