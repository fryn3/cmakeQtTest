cmake_minimum_required(VERSION 3.15.0)  # тут можно постарее выбрать

project(test)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)


set(test_SRCS
    mainwindow.ui
    mainwindow.cpp
    mainwindow.h
    main.cpp
    ../a/a.h
)

# При необходимости исправить на путь сборки библиотека 'a'
find_library(A_LIB NAMES libaLib PATHS ../b-a-Desktop_Qt_5_12_3_MinGW_32_bit)

if(NOT A_LIB)
    message(FATAL_ERROR "MY:: A_LIB library not found")
endif()

add_executable(helloworld WIN32 ${test_SRCS})

target_include_directories(helloworld PUBLIC ../a )

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Use the Widgets module from Qt 5
target_link_libraries(helloworld Qt5::Widgets ${A_LIB})

