#include "FileManager.h"
#include <fstream>
#include <iostream>

void FileManager::saveToFile(const TaskList& taskList, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& task : taskList.getTasks()) {
            file << task.getName() << '\n'
                 << task.isCompleted() << '\n'
                 << task.getDescription() << '\n';
        }
        file.close();
    } else {
        std::cerr << "Ne udalos' otkryt' fail dlya sohraneniya zadach." << std::endl;
    }
}

void FileManager::loadFromFile(TaskList& taskList, const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string name, description;
        bool completed;
        while (std::getline(file, name)) {
            file >> completed;
            file.ignore();
            std::getline(file, description);
            Task task(name, description);
            if (completed) {
                task.markAsCompleted();
            }
            taskList.addTask(task);
        }
        file.close();
    } else {
        std::cerr << "Ne udalos' otkryt' fail dlya zagruzki zadach." << std::endl;
    }
}
