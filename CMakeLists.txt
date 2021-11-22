cmake_minimum_required(VERSION 3.20)
project(LinkedDouble)

set(CMAKE_CXX_STANDARD 14)

add_executable(LinkedDouble main.cpp NodeDouble.h LinkedDouble.cpp LinkedDouble.h Book.cpp Book.h)
