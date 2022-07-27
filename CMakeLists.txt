cmake_minimum_required(VERSION 3.21)
project(CppLearningPhase)

set(CMAKE_CXX_STANDARD 23)

add_executable(CppLearningPhase main.cpp strings.cpp classes.cpp)
add_executable(strings strings.cpp)
add_executable(classes classes.cpp)
