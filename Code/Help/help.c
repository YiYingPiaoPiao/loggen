/******************************************************
 | Generate Log
 |******************************************************
 | File : Help/Help.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 01-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "HelpPub.h"
#include "Help.h"

public HELP* Help() {

    HELP* Help = (HELP*) malloc(sizeof(HELP));

    Help->userInput = userInput;
    Help->getHelp = getHelp;

    return Help;
}

public void freeHelp(HELP* freeHelp) {

    free(freeHelp);
}

private void userInput(char** userInput) {

    UserInput = userInput;
    printf("%s", UserInput[0]);
}

private char* getHelp(int typeNum) {

    switch (typeNum) {

        case 0:
            return getShort();

        case 1:
            return "long";

        default:
            return "None";
    }
}

private char* getShort() {

    char* str1 = "usage: loggen [-v | -version]\n";
    char* str2 = "              [-h | -help]\n";

    char* Msg = (char*) malloc(strlen(str1) + strlen(str2) + 1);

    if (Msg == NULL) {

        fprintf(stderr, "Memory allocation failed.\n");
        return "";
    }

    strcpy(Msg, str1);
    strcat(Msg, str2);

    return Msg;
}