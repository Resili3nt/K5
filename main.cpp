#include <iostream>
#include "TaskList.h"
#include "FileManager.h"

int main() {
    TaskList taskList;
    FileManager::loadFromFile(taskList, "tasks.txt");

    int choice;
    do {
        std::cout << "1. Dobavit' zadachu\n";
        std::cout << "2. Udalit' zadachu\n";
        std::cout << "3. Pokazat' aktivnye zadachi\n";
        std::cout << "4. Pokazat' vypolnennye zadachi\n";
        std::cout << "5. Otmetit' zadachu kak vypolnennuyu\n";
        std::cout << "6. Sohranit' i vyjti\n";
        std::cout << "Vvedite vash vybor: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string name, description;
            std::cout << "Vvedite nazvanie zadachi: ";
            std::getline(std::cin, name);
            std::cout << "Vvedite opisanie zadachi: ";
            std::getline(std::cin, description);
            taskList.addTask(Task(name, description));
        } else if (choice == 2) {
            std::string name;
            std::cout << "Vvedite nazvanie zadachi dlya udaleniya: ";
            std::getline(std::cin, name);
            taskList.removeTask(name);
        } else if (choice == 3) {
            taskList.displayTasks();
        } else if (choice == 4) {
            taskList.displayTasks(true);
        } else if (choice == 5) {
            std::string name;
            std::cout << "Vvedite nazvanie zadachi dlya otmetki kak vypolnennoy: ";
            std::getline(std::cin, name);
            taskList.markTaskAsCompleted(name);
        } else if (choice == 6) {
            FileManager::saveToFile(taskList, "tasks.txt");
            std::cout << "Zadachi sohranyony. Vykhod...\n";
        }
    } while (choice != 6);

    return 0;
}
