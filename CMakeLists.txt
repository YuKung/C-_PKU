cmake_minimum_required(VERSION 3.23)
project(C___PKU)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___PKU main.cpp)

add_executable(001.simple_swap chapter1/001.simple_swap.cpp)
add_executable(002.harder_swap chapter1/002.harder_swap.cpp)
add_executable(003.strange_return_value chapter1/003.strange_return_value.cpp)
add_executable(004mysterious_init chapter1/004.mysterious_init.cpp)
add_executable(005.student_info chapter2/005.student_info.cpp)
add_executable(006.class_copy chapter2/006.copy_constructor.cpp)
add_executable(007.return_what chapter3/007_010.return_what.cpp)
add_executable(008.simple_complex_class chapter2/008.simple_complex_class.cpp)
add_executable(009.where_is_input_from chapter2/009.where_is_input_from.cpp)
add_executable(011.enclosing_class chapter3/011.enclosing_class.cpp)
add_executable(012.where_pointer_from chapter3/012.where_pointer_from.cpp)
add_executable(013.WarCraft1_Pre chapter3/013.WarCraft1_Pre.cpp)