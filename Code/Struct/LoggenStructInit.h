/******************************************************
 | Generate Log
 |******************************************************
 | File : Struct/LoggenStructInit.h
 |
 | Created on 06-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 06-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENSTRUCTINIT_H
#define CODE_LOGGENSTRUCTINIT_H

struct LOGGEN_INIT {

    char* ( *LoggenInitMain ) ( int, char** );
};

#endif //CODE_LOGGENSTRUCTINIT_H
