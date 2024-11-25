# Устанавливаем минимальную версию CMake и имя проекта
cmake_minimum_required(VERSION 3.10)
project(TaskManager)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Указываем исходные файлы проекта
set(SOURCES
    main.cpp
    Task.cpp
    TaskList.cpp
    FileManager.cpp
)

# Создаём исполняемый файл с использованием указанных исходников
add_executable(manager_zada4 ${SOURCES})

# Если есть необходимость, можно добавить дополнительные флаги компилятора
# target_compile_options(TaskManager PRIVATE -Wall)
