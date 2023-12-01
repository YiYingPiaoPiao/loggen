/******************************************************
 | Generate Log
 |******************************************************
 | File : Init/Init.h
 |
 | Created on 30-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 01-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_INIT_H
#define CODE_INIT_H

#include <io.h>
#include <stdlib.h>

#include "../global.h"

private void userInput(char**);

private void setProjectName(char*);


private bool isInit();


private char** UserInput  ;
private char*  ProjectName;

#endif // CODE_INIT_H