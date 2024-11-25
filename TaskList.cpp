#include "TaskList.h"
#include <algorithm>
#include <iostream>

void TaskList::addTask(const Task& task) {
    tasks.push_back(task);
}

void TaskList::removeTask(const std::string& name) {
    tasks.erase(std::remove_if(tasks.begin(), tasks.end(),
        [&name](const Task& task) { return task.getName() == name; }), tasks.end());
}

void TaskList::displayTasks(bool completedOnly) const {
    for (const auto& task : tasks) {
        if (!completedOnly || task.isCompleted()) {
            task.display();
        }
    }
}

void TaskList::markTaskAsCompleted(const std::string& name) {
    for (auto& task : tasks) {
        if (task.getName() == name) {
            task.markAsCompleted();
            break;
        }
    }
}

const std::vector<Task>& TaskList::getTasks() const {
    return tasks;
}
