cmake_minimum_required(VERSION 3.26)
project(Code C)

set(CMAKE_C_STANDARD 11)

add_executable(Code
        loggen.c
        loggen.h
        Struct/struct_error.h
        Error/error.h
        Error/error.c)
