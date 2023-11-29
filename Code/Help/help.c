/******************************************************
 | Generate Log
 |******************************************************
 | File : Help/help.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 29-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "help.h"

// Public Function
struct HELP helpInit() {

    struct HELP help;

    help.displayShort = displayShort;

    return help;
}

// Private Function
static void displayShort() {

    printf("Help short");
}