#ifndef TASKLIST_H
#define TASKLIST_H

#include "Task.h"
#include <vector>
#include <string>

class TaskList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const Task& task);
    void removeTask(const std::string& name);
    void displayTasks(bool completedOnly = false) const;
    void markTaskAsCompleted(const std::string& name);
    const std::vector<Task>& getTasks() const; // Метод для получения списка задач
};

#endif
