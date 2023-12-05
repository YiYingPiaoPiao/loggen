/******************************************************
 | Generate Log
 |******************************************************
 | File : Struct/LoggenStructCommand.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENSTRUCTCOMMAND_H
#define CODE_LOGGENSTRUCTCOMMAND_H

#include "../LoggenGlobal.h"

struct LOGGEN_COMMAND {

    char* Command;

    int ( *getCommandIndex ) ( LOGGEN_COMMAND_INPUT );
};

#endif //CODE_LOGGENSTRUCTCOMMAND_H
