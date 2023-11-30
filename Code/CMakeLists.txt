cmake_minimum_required(VERSION 3.26)
project(Code C)

set(CMAKE_C_STANDARD 11)

add_executable(Code
        global.h

        loggen.c
        loggen.h

        Struct/struct_error.h
        Struct/struct_help.h
        Struct/struct_init.h

        Error/Error.c
        Error/Error.h
        Error/ErrorPub.h

        Help/Help.c
        Help/Help.h
        Help/HelpPub.h

        Init/Init.c
        Init/Init.h
        Init/InitPub.h
)