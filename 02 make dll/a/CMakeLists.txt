cmake_minimum_required(VERSION 3.15.0)  # тут можно постарее выбрать

project(a)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})

add_definitions(${Qt5Widgets_DEFINITIONS})

set(a_SRCS
    a.cpp
    a.h
)

add_library(aLib SHARED ${a_SRCS})

target_link_libraries(aLib Qt5::Widgets)
