cmake_minimum_required(VERSION 3.15.0)  # тут можно постарее выбрать

# Find the QtWidgets library
#find_package(Qt5Widgets)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Add the include directories for the Qt 5 Widgets module to
# the compile lines.
include_directories(${Qt5Widgets_INCLUDE_DIRS})

# Use the compile definitions defined in the Qt 5 Widgets module
#add_definitions(${Qt5Widgets_DEFINITIONS})

set(a_SRCS
    a.cpp
    a.h
    b/b.cpp
    b/b.h
)

add_library(aLib STATIC ${a_SRCS})
