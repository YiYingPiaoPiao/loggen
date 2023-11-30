/******************************************************
 | Generate Log
 |******************************************************
 | File : Init/InitPub.h
 |
 | Created on 30-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_INITPUB_H
#define CODE_INITPUB_H

#include "../global.h"
#include "../Struct/struct_init.h"

typedef struct INIT INIT;

public INIT *Init();
public void freeInit(INIT*);

#endif // CODE_INITPUB_H