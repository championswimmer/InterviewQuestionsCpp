cmake_minimum_required(VERSION 3.13)
project(InterviewQuesCpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(InterviewQuesCpp main.cpp)
add_executable(try-pattern-1 patterns/try-pattern-1.cpp)
add_executable(sqrt binary_search/sqrt.cpp)
add_executable(median-sorted binary_search/median-sorted.cpp)
add_executable(mod-power binary_search/mod-power.cpp)