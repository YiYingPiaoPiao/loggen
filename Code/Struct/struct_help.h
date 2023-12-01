/******************************************************
 | Generate Log
 |******************************************************
 | File : Struct/struct_help.h
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 01-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_STRUCT_HELP_H
#define CODE_STRUCT_HELP_H

struct HELP {

    void (*userInput)(char**);

    char* (*getHelp)(int);
};

#endif //CODE_STRUCT_HELP_H
