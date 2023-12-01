/******************************************************
 | Generate Log
 |******************************************************
 | File : loggen.h
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 01-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGEN_H
#define CODE_LOGGEN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "global.h"
#include "Error/ErrorPub.h"
#include "Help/HelpPub.h"
#include "Init/InitPub.h"

#define CommandSize 1

typedef struct COMMAND_PAIR {

    char *command;
    void (*function)(char**);
} CommandPair;

private void ObjectsCreate();
private void ObjectsClearUp();

private CommandPair* CommandPairCreate();
private void         CommandPairClear(CommandPair*);

private int getCommandIndex(CommandPair*, char*);

INIT  * init ;
HELP  * help ;
ERROR * error;

#endif //CODE_LOGGEN_H
