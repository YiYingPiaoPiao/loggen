/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenCommand/LoggenCommand.c
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 05-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "LoggenCommandPub.h"
#include "LoggenCommand.h"

public LOGGEN_COMMAND* LoggenCommand () {

    LOGGEN_COMMAND* LoggenCommand = ( LOGGEN_COMMAND* ) malloc ( sizeof ( LOGGEN_COMMAND ) );

    _LoggenCommand = ( LOGGEN_COMMAND* ) malloc ( sizeof ( LOGGEN_COMMAND ) );
    _LoggenCommand = LoggenCommand;

    return LoggenCommand;
}

public void LoggenCommand_Free ( LOGGEN_COMMAND* FreeLoggenCommand ) {

    free ( FreeLoggenCommand );
}

private int getCommandIndex ( LOGGEN_COMMAND_INPUT CommandInput ) {

    for ( int i = 0; i < CommandSize; i++ ) {

        if ( strcmp ( _LoggenCommand[i].Command, CommandInput ) == 0 ) {

            return i;
        }
    }

    return -1;
}