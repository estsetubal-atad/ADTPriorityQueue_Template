#include "pqueueElem.h"
#include <stdio.h>

void pqueueElemPrint(PQueueElem elem) {
    printf("%c ", elem);
    //clientPrint(&elem);
}

int pqueueElemPriority(PQueueElem elem) {
    /* priority ordered by ascii alphabet*/
    return -elem;
    //return elem.type;
}