/******************************************************
 | Generate Log
 |******************************************************
 | File : Struct/LoggenStructHelp.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENSTRUCTHELP_H
#define CODE_LOGGENSTRUCTHELP_H

#include "../LoggenGlobal.h"

struct LOGGEN_HELP {

    char* ( *getTipsType    ) ( LOGGEN_HELP_TYPE    );
    char* ( *getTipsCommand ) ( LOGGEN_HELP_COMMAND );
};

#endif //CODE_LOGGENSTRUCTHELP_H