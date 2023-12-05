/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenHelp/LoggenHelp.c
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "LoggenHelpPub.h"
#include "LoggenHelp.h"

public LOGGEN_HELP* LoggenHelp () {

    LOGGEN_HELP* LoggenHelp = ( LOGGEN_HELP* ) malloc ( sizeof ( LOGGEN_HELP ) );

    LoggenHelp -> getTips = getTips;

    return LoggenHelp;
}

public void LoggenHelp_Free ( LOGGEN_HELP* FreeLoggenHelp ) {

    free ( FreeLoggenHelp );
}

private char* getTips ( LOGGEN_HELP_TYPE HelpType ) {

    if ( strcmp ( LOGGEN_HELP_SHORT, HelpType ) == 0 ) {

        return "usage short";
    }

    if ( strcmp ( LOGGEN_HELP_LONG, HelpType ) == 0 ) {

        return "usage long";
    }

    return HelpType;
}