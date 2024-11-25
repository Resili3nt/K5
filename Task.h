#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string name;
    std::string description;
    bool completed;

public:
    Task(std::string name, std::string description);
    void markAsCompleted();
    bool isCompleted() const;
    void display() const;
    std::string getName() const;
    std::string getDescription() const;
};

#endif
