cmake_minimum_required(VERSION 3.15.0)  # тут можно постарее выбрать

project(test)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(test_SRCS
    mainwindow.ui
    mainwindow.cpp
    mainwindow.h
    main.cpp
)

add_executable(helloworld WIN32 ${test_SRCS})

target_include_directories(helloworld PUBLIC ../a)

# Use the Widgets module from Qt 5
target_link_libraries(helloworld Qt5::Widgets aLib)
