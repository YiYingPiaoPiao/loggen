/******************************************************
 | Generate Log
 |******************************************************
 | File : Help/HelpPub.h
 |
 | Created on 30-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_HELPPUB_H
#define CODE_HELPPUB_H

#include "../global.h"
#include "../Struct/struct_help.h"

typedef struct HELP HELP;

public HELP *Help();
public void freeHelp(HELP*);

#endif //CODE_HELPPUB_H
