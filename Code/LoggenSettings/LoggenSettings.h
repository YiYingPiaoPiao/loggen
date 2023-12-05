/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenSettings/LoggenSettings.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_PRILOGGENSETTINGS_H
#define CODE_PRILOGGENSETTINGS_H

#include <string.h>
#include <stdlib.h>

#include "../LoggenGlobal.h"

private char* getPropertyPath ( LOGGEN_PROPERTY_TYPE );

// Cross-Platform
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

#endif //CODE_PRILOGGENSETTINGS_H