/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenInit/LoggenInitPub.h
 |
 | Created on 06-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 06-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENINITPUB_H
#define CODE_LOGGENINITPUB_H

#include "../LoggenGlobal.h"
#include "../Struct/LoggenStructInit.h"

typedef struct LOGGEN_INIT LOGGEN_INIT;

public LOGGEN_INIT* LoggenInit ();
public void         LoggenInit_Free ( LOGGEN_INIT* );

#endif // CODE_LOGGENINITPUB_H