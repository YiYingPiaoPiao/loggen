/******************************************************
| File : global.h
|
| Created on 30-Nov-2023
| By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
|
| Last modified on 06-DEC-2023
| By SeeChen Lee [leeseechen@gmail.com]
|*********************************************************************
| Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
|*********************************************************************/

#ifndef CODE_LOGGENGLOBAL_H
#define CODE_LOGGENGLOBAL_H

#define public
#define private static

#define new

#define EndProgram return 0

#ifdef _WIN32

#include <io.h>

#define LoggenMkdir( Path ) mkdir( Path )

private char* UserEnvVar = "USERPROFILE";

#elif __linux__

#include <unistd.h>
#include <sys/stat.h>

#define LoggenMkdir( Path ) mkdir( Path, S_IRWXU )

private char* UserEnvVar = "HOME";

#endif

typedef int bool;
#define TRUE  1
#define FALSE 0

typedef char* LOGGEN_PROPERTY_TYPE;
#define LOGGEN_SCOPE_GLOBAL "global"
#define LOGGEN_SCOPE_LOCAL  "local"

typedef char* LOGGEN_HELP_TYPE;
#define LOGGEN_HELP_TYPE_SHORT "short"
#define LOGGEN_HELP_TYPE_LONG  "long"
typedef char* LOGGEN_HELP_COMMAND;
#define LOGGEN_HELP_COMMAND_INIT "init"

typedef char* LOGGEN_COMMAND_TYPE;
#define LOGGEN_COMMAND_INIT "init"

#endif //CODE_LOGGENGLOBAL_H
