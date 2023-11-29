cmake_minimum_required(VERSION 3.26)
project(Code C)

set(CMAKE_C_STANDARD 11)

add_executable(Code
        loggen.c
        loggen.h
        Struct/struct_error.h
        Struct/struct_help.h
        Error/error.h
        Error/error.c
        Help/help.c
        Help/help.h)