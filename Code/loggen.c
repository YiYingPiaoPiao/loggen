/******************************************************
 | Generate Log
 |******************************************************
 | File : loggen.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 04-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "loggen.h"

int main ( int argc, char** argv ) {

    loggenHelp     = new LoggenHelp     ();
    loggenSettings = new LoggenSettings ();

    if ( argc <= 1 ) {

        printf ( "%s", loggenHelp -> getTips ( LOGGEN_HELP_SHORT ) );

        LoggenHelp_Free     ( loggenHelp     );
        LoggenSettings_Free ( loggenSettings );

        return EndProgram;
    }

    LoggenHelp_Free     ( loggenHelp     );
    LoggenSettings_Free ( loggenSettings );

    return EndProgram;
}