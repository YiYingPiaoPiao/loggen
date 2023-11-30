/******************************************************
 | Generate Log
 |******************************************************
 | File : Help/Help.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "HelpPub.h"
#include "Help.h"

public HELP* Help() {

    HELP* Help = (HELP*) malloc(sizeof(HELP));

    Help->showShort = showShort;

    return Help;
}

public void freeHelp(HELP* freeHelp) {

    free(freeHelp);
}

private void showShort() {

    printf("usage: loggen [-v | -version]\n");
    printf("              [-h | -help]\n");
}