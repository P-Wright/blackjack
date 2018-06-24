cmake_minimum_required (VERSION 3.5)
project(QuickStart)

set(QUICK_START_VERSION_MAJOR 1)
set(QUICK_START_VERSION_MINOR 0)
set(SOURCES ${PROJECT_SOURCE_DIR}/src/QuickStart.cpp)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

include_directories("${PROJECT_SOURCE_DIR}/include")
add_library(QuickStart STATIC ${SOURCES})
enable_testing()


add_subdirectory(gtest/googletest
                 ${CMAKE_BINARY_DIR}/gtest
                 EXCLUDE_FROM_ALL)

add_subdirectory(test)