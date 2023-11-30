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

#include "ErrorPub.h"
#include "Error.h"

public ERROR* Error() {

    setMsg();

    ERROR* Error = (ERROR*) malloc(sizeof(ERROR));
    Error->getMsg = getMsg;

    return Error;
}

public void freeError(ERROR* freeError) {

    free(freeError);
}

private char* getMsg(int index) {

    return Msg[index];
}

private void setMsg() {

    Msg = (char**) malloc(ErrorSize * sizeof(char*));

    Msg[0] = "Fetal: No init this folder. Using \"loggen init <project/folder name>\" to init.\n";
}