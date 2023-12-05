/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenSettings/LoggenSettingsPub.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENSETTINGSPUB_H
#define CODE_LOGGENSETTINGSPUB_H

#include "../LoggenGlobal.h"
#include "../Struct/LoggenStructSettings.h"

typedef struct LOGGEN_SETTINGS LOGGEN_SETTINGS;

public LOGGEN_SETTINGS* LoggenSettings ();
public void             LoggenSettings_Free ( LOGGEN_SETTINGS* );

#endif //CODE_LOGGENSETTINGSPUB_H