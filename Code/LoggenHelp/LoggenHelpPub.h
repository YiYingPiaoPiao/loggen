/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenHelp/LoggenHelpPub.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENHELPPUB_H
#define CODE_LOGGENHELPPUB_H

#include "../LoggenGlobal.h"
#include "../Struct/LoggenStructHelp.h"

typedef struct LOGGEN_HELP LOGGEN_HELP;

public LOGGEN_HELP* LoggenHelp ();
public void         LoggenHelp_Free ( LOGGEN_HELP* );

#endif //CODE_LOGGENHELPPUB_H