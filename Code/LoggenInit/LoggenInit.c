/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenInit/LoggenInit.c
 |
 | Created on 06-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 07-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "LoggenInitPub.h"
#include "LoggenInit.h"

public LOGGEN_INIT* LoggenInit () {

    LOGGEN_INIT* LoggenInit = ( LOGGEN_INIT* ) malloc ( sizeof ( LOGGEN_INIT ) );

    LoggenInit -> LoggenInitMain = LoggenInitMain;

    return LoggenInit;
}

public void LoggenInit_Free ( LOGGEN_INIT* FreeLoggenInit ) {

    free ( FreeLoggenInit );
}

private char* LoggenInitMain ( int UserInputLen, char** UserInput ) {

    char* LoggenProjectPath = "./Loggen";

    if ( access ( LoggenProjectPath, F_OK ) == 0 ) {

        return "You are already Make a Loggen Project.";
    }

    if ( UserInputLen == 3 ) {

        LoggenMkdir ( "./Loggen" );
        LoggenMkdir ( "./Loggen/.loggen" );

        return UserInput [ 2 ];
    }

    return "test";
}