/******************************************************
| File : global.h
|
| Created on 30-Nov-2023
| By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
|
| Last modified on 05-DEC-2023
| By SeeChen Lee [leeseechen@gmail.com]
|*********************************************************************
| Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
|*********************************************************************/

#ifndef CODE_LOGGENGLOBAL_H
#define CODE_LOGGENGLOBAL_H

#define public
#define private static

#define new

#define EndProgram 0

typedef int bool;
#define TRUE  1
#define FALSE 0

typedef char* LOGGEN_PROPERTY_TYPE;
#define LOGGEN_SCOPE_GLOBAL "global"
#define LOGGEN_SCOPE_LOCAL  "local"

typedef char* LOGGEN_HELP_TYPE;
#define LOGGEN_HELP_SHORT "short"
#define LOGGEN_HELP_LONG  "long"

typedef char* LOGGEN_COMMAND_INPUT;
#define LOGGEN_COMMAND_INIT "init"

#endif //CODE_LOGGENGLOBAL_H
