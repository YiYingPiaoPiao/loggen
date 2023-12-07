/******************************************************
 | Generate Log
 |******************************************************
 | File : Struct/LoggenStructSettings.h
 |
 | Created on 05-DEC-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 07-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#ifndef CODE_LOGGENSTRUCTSETTINGS_H
#define CODE_LOGGENSTRUCTSETTINGS_H

struct LOGGEN_SETTINGS {

    char* ( *getPropertyPath ) ( LOGGEN_PROPERTY_TYPE );
    void  ( *createFolder    ) ( char*                );
};

#endif //CODE_LOGGENSTRUCTSETTINGS_H