/******************************************************
 | Generate Log
 |******************************************************
 | File : loggen.c
 |
 | Created on 29-Nov-2023
 | By YiYingPiaoPiao [yiyingpiaopiao@gmail.com]
 |
 | Last modified on 30-Nov-2023
 | By SeeChen Lee [leeseechen@gmail.com]
 |*********************************************************************
 | Copyright (c) 2023 SeeChen-Lee, YiYingPiaoPiao All rights reserved.
 |*********************************************************************/

#include "loggen.h"

HELP  * help ;
ERROR * error;
INIT  * init ;

int main(int argc, char **argv) {

    ObjectsCreate();

    if (argc <= 1) {

        help->showShort();

        ObjectsClearUp();
        return 0;
    }

    if (!init->isInit()) {

        printf("%s", error->getMsg(0));

        ObjectsClearUp();
        return 0;
    }

    ObjectsClearUp();
    return 0;
}

private void ObjectsCreate() {

    help  = Help() ;
    error = Error();
    init  = Init() ;
}
private void ObjectsClearUp() {

    free(help);
    free(error);
    free(init);
}