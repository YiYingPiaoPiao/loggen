/******************************************************
 | Generate Log
 |******************************************************
 | File : Struct/struct_error.h
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_STRUCT_ERROR_H
#define CODE_STRUCT_ERROR_H

struct ERROR {

    char* (*getMsg)(int);
};

#endif //CODE_STRUCT_ERROR_H
