cmake_minimum_required(VERSION 3.21)
project(CppLearningPhase)

set(CMAKE_CXX_STANDARD 23)

add_executable(CppLearningPhase main.cpp strings.cpp classes.cpp pointers.cpp practice.cpp cpp_structure.cpp ATMProject.cpp)
add_executable(main main.cpp)
add_executable(strings strings.cpp)
add_executable(classes classes.cpp)
add_executable(pointers pointers.cpp)
add_executable(practice practice.cpp)
add_executable(cpp_structure cpp_structure.cpp)
add_executable(ATMProject ATMProject.cpp)