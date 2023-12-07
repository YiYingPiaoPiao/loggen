/******************************************************
 | Generate Log
 |******************************************************
 | File : LoggenSettings/LoggenSettings.c
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 07-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "LoggenSettingsPub.h"
#include "LoggenSettings.h"

public LOGGEN_SETTINGS* LoggenSettings () {

    LOGGEN_SETTINGS* LoggenSettings = ( LOGGEN_SETTINGS* ) malloc ( sizeof ( LOGGEN_SETTINGS ) );

    LoggenSettings -> getPropertyPath = getPropertyPath;
    LoggenSettings -> createFolder    = createFolder   ;

    return LoggenSettings;
}

public void LoggenSettings_Free ( LOGGEN_SETTINGS* FreeLoggenSettings ) {

    free ( FreeLoggenSettings );
}

private char* getPropertyPath ( LOGGEN_PROPERTY_TYPE Scope ) {

    char* PropertyFolderName = "/.loggen";

    if ( strcmp ( LOGGEN_SCOPE_GLOBAL, Scope ) == 0 ) {

        char* UserPath = getenv ( UserEnvVar );

        char* PropertyFullPath = malloc ( strlen( UserPath ) + strlen ( PropertyFolderName ) + 1 );

        strcpy ( PropertyFullPath, UserPath           );
        strcat ( PropertyFullPath, PropertyFolderName );

        return PropertyFullPath;
    }

    if ( strcmp ( LOGGEN_SCOPE_LOCAL, Scope ) == 0 ) {

        strcat ( "./Loggen", PropertyFolderName );

        return PropertyFolderName;
    }

    return "";
}

private void createFolder ( char* PropertyPath ) {

    if ( access ( PropertyPath, F_OK ) == -1 ) {

        LoggenMkdir ( PropertyPath );
    }
}