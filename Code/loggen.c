/******************************************************
 | Generate Log
 |******************************************************
 | File : loggen.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 02-Dec-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "loggen.h"

int main(int argc, char **argv) {

    ObjectsCreate();

    if (argc <= 1) {

        printf("%s", help->getHelp(0));

        ObjectsClearUp();
        return 0;
    }

    CommandPair* commandPair = CommandPairCreate();
    if (getCommandIndex(commandPair, argv[1]) < 0) {

        printf("%s", help->getHelp(0));

        ObjectsClearUp();
        CommandPairClear(commandPair);
        return 0;
    }

    commandPair[getCommandIndex(commandPair, argv[1])].function(argv);

    ObjectsClearUp();
    CommandPairClear(commandPair);
    return 0;
}

private void ObjectsCreate() {

    help  = Help() ;
    error = Error();
    init  = Init() ;
}
private void ObjectsClearUp() {

    freeHelp (help );
    freeError(error);
    freeInit (init );
}

private CommandPair* CommandPairCreate() {

    CommandPair* commandPair = (CommandPair*) malloc(CommandSize * sizeof(CommandPair));

    commandPair[0].command  = "init";
    commandPair[0].function = init->userInput;

    return commandPair;
}

private void CommandPairClear(CommandPair* commandPair) {

    free(commandPair);
}

private int getCommandIndex(CommandPair* commandPair, char* userCommand) {

    for (int i = 0; i < CommandSize; i++) {

        if (strcmp(commandPair[i].command, userCommand) == 0) {

            return i;
        }
    }

    return -1;
}