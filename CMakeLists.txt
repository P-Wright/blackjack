cmake_minimum_required (VERSION 3.5)
project(BlackJack)

set(BLACK_JACK_VERSION_MAJOR 1)
set(BLACK_JACK_VERSION_MINOR 0)
set(SOURCES ${PROJECT_SOURCE_DIR}/src/BlackJack.cpp)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

include_directories("${PROJECT_SOURCE_DIR}/include")
add_library(BlackJack STATIC ${SOURCES})
enable_testing()


add_subdirectory(gtest/googletest
                 ${CMAKE_BINARY_DIR}/gtest
                 EXCLUDE_FROM_ALL)

add_subdirectory(test)