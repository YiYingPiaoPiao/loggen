/******************************************************
 | Generate Log
 |******************************************************
 | File : loggen.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 29-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "loggen.h"

// Main Function
int main(int argc, char **argv) {

    help = helpInit();

    if (argc <= 1) {

        // Display help message
        help.displayShort();

        return 0;
    }

    if (strcmp(argv[1], "help") == 0 || strcmp(argv[1], "Help") == 0) {

        printf("Help");
    }

    printf("%s", argv[1]);

    return 0;
}