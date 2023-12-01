/******************************************************
 | Generate Log
 |******************************************************
 | File : Struct/struct_init.h
 |
 | Created on 30-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_STRUCT_INIT_H
#define CODE_STRUCT_INIT_H

struct INIT {

    void (*userInput)(char**);

    void (*setProjectName)(char*);

    bool (*isInit)();
};

#endif //CODE_STRUCT_INIT_H
