cmake_minimum_required(VERSION 3.0.0)

project(Calculator_Project VERSION 1.0.0)

add_subdirectory(math_lib_src)

add_subdirectory(print_lib_src)

add_executable(calculator
main.cpp)

target_link_libraries(calculator my_math my_print)
