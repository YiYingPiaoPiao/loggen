/******************************************************
 | Generate Log
 |******************************************************
 | File : Error/error.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 29-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "error.h"

struct Error err;

void test() {

    err.num = 0;

    printf("%d", err.num);
}