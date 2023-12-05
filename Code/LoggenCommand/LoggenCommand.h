/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenCommand/LoggenCommand.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENCOMMAND_H
#define CODE_LOGGENCOMMAND_H

#define CommandSize 10

#include <string.h>
#include <stdlib.h>

#include "../LoggenGlobal.h"

private int getCommandIndex ( LOGGEN_COMMAND_INPUT );

private LOGGEN_COMMAND* _LoggenCommand;

#endif //CODE_LOGGENCOMMAND_H