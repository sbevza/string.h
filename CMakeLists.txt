cmake_minimum_required(VERSION 3.21)
project(string_h C)

set(CMAKE_C_STANDARD 11)

add_executable(string_h main.c string.c string.h)
