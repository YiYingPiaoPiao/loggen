/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenCommand/LoggenCommandPub.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENCOMMANDPUB_H
#define CODE_LOGGENCOMMANDPUB_H

#include "../LoggenGlobal.h"
#include "../Struct/LoggenStructCommand.h"

typedef struct LOGGEN_COMMAND LOGGEN_COMMAND;

public LOGGEN_COMMAND* LoggenCommand ();
public void            LoggenCommand_Free ( LOGGEN_COMMAND* );

#endif //CODE_LOGGENCOMMANDPUB_H