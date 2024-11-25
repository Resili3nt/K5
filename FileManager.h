#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "TaskList.h"
#include <string>

class FileManager {
public:
    static void saveToFile(const TaskList& taskList, const std::string& filename);
    static void loadFromFile(TaskList& taskList, const std::string& filename);
};

#endif
