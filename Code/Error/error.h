/******************************************************
 | Generate Log
 |******************************************************
 | File : Error/error.h
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 29-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_ERROR_H
#define CODE_ERROR_H

#include <stdio.h>
#include <stdlib.h>

#include "../global.h"
#include "../Struct/struct_error.h"

#define ErrorSize 5

private char* getMsg(int);
private void  setMsg();

private char** Msg;

#endif //CODE_ERROR_H