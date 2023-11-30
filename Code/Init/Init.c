/******************************************************
 | Generate Log
 |******************************************************
 | File : Init/Init.c
 |
 | Created on 30-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "InitPub.h"
#include "Init.h"

public INIT* Init() {

    INIT* Init = (INIT*) malloc(sizeof(INIT));

    // Setter
    Init->setProjectName = setProjectName;

    // Function
    Init->isInit = isInit;

    return Init;
}

public void freeInit(INIT* freeInit) {

    free(freeInit);
}

// Setter
private void setProjectName(char* Name) {

    ProjectName = Name;
}

// Function
private bool isInit() {

    char* initPath = ".loggen-config";

    if (access(initPath, 0) == 0) {

        return true;
    }

    return false;
}