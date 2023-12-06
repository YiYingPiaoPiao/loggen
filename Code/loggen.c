/******************************************************
 | Generate Log
 |******************************************************
 | File : loggen.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 06-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "loggen.h"

int main ( int argc, char** argv ) {

    loggenHelp     = new LoggenHelp     ();
    loggenSettings = new LoggenSettings ();

    if ( argc <= 1 ) {

        printf ( "%s\n", loggenHelp -> getTipsType ( LOGGEN_HELP_TYPE_SHORT ) );

        LoggenHelp_Free     ( loggenHelp     );
        LoggenSettings_Free ( loggenSettings );

        EndProgram;
    }

    LOGGEN_COMMAND_TYPE UserCommand = argv[1];

    if ( argc <= 2 ) {


        printf ( "%s\n", loggenHelp -> getTipsCommand ( UserCommand ) );

        LoggenHelp_Free     ( loggenHelp     );
        LoggenSettings_Free ( loggenSettings );

        EndProgram;
    }

    if ( strcmp ( UserCommand, LOGGEN_COMMAND_INIT ) == 0 ) {

        LOGGEN_INIT* loggenInit = new LoggenInit ();

        printf ( "%s\n", loggenInit -> LoggenInitMain ( argc, argv ) );

        LoggenInit_Free     ( loggenInit     );
        LoggenHelp_Free     ( loggenHelp     );
        LoggenSettings_Free ( loggenSettings );

        EndProgram;
    }

    LoggenHelp_Free     ( loggenHelp     );
    LoggenSettings_Free ( loggenSettings );

    EndProgram;
}