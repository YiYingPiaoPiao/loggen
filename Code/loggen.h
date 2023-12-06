/******************************************************
 | Generate Log
 |******************************************************
 | File : loggen.h
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 06-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGEN_H
#define CODE_LOGGEN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "LoggenGlobal.h"

#include "LoggenInit/LoggenInitPub.h"
#include "LoggenHelp/LoggenHelpPub.h"
#include "LoggenSettings/LoggenSettingsPub.h"

LOGGEN_HELP     *  loggenHelp    ;
LOGGEN_SETTINGS *  loggenSettings;

#endif //CODE_LOGGEN_H
