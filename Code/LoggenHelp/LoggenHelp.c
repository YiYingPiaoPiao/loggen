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

    LoggenHelp -> getTipsType    = getTipsType   ;
    LoggenHelp -> getTipsCommand = getTipsCommand;

    return LoggenHelp;
}

public void LoggenHelp_Free ( LOGGEN_HELP* FreeLoggenHelp ) {

    free ( FreeLoggenHelp );
}

private char* getTipsType ( LOGGEN_HELP_TYPE HelpType ) {

    if ( strcmp ( LOGGEN_HELP_TYPE_SHORT, HelpType ) == 0 ) {

        return "usage short";
    }

    if ( strcmp ( LOGGEN_HELP_TYPE_LONG, HelpType ) == 0 ) {

        return "usage long";
    }

    return HelpType;
}

private char* getTipsCommand ( LOGGEN_HELP_COMMAND UserCommand ) {

    if ( strcmp ( LOGGEN_HELP_COMMAND_INIT, UserCommand ) == 0 ) {

        return "Using loggen init help to get More message.";
    }

    return UserCommand;
}