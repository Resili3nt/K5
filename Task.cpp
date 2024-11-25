#include "Task.h"
#include <iostream>

Task::Task(std::string name, std::string description)
    : name(name), description(description), completed(false) {}

void Task::markAsCompleted() {
    completed = true;
}

bool Task::isCompleted() const {
    return completed;
}

void Task::display() const {
    std::cout << (completed ? "[Vypolneno] " : "[V ozhidanii] ") << name << ": " << description << std::endl;
}

std::string Task::getName() const {
    return name;
}

std::string Task::getDescription() const {
    return description;
}
