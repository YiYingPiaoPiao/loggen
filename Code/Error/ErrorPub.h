/******************************************************
 | Generate Log
 |******************************************************
 | File : Error/ErrorPub.c
 |
 | Created on 30-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_ERRORPUB_H
#define CODE_ERRORPUB_H

#include "../global.h"
#include "../Struct/struct_error.h"

typedef struct ERROR ERROR;

public ERROR *Error();
public void  freeError(ERROR*);

#endif //CODE_ERRORPUB_H
