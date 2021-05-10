#include "pqueue.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct pqueueImpl {
   
} PQueueImpl;

PtPQueue pqueueCreate() {

}

int pqueueDestroy(PtPQueue *ptQueue) {
    
}

int pqueueEnqueue(PtPQueue pqueue, PQueueElem elem) {
    
}

int pqueueDequeue(PtPQueue pqueue, PQueueElem *ptElem) {
    
}

int pqueueFront(PtPQueue pqueue, PQueueElem *ptElem) {
   
}

int pqueueSize(PtPQueue pqueue, int *ptSize) {
    
}

bool pqueueIsEmpty(PtPQueue pqueue) {
   
}

int pqueueClear(PtPQueue pqueue) {
   
}

void  pqueuePrint(PtPQueue pqueue) {
    if (pqueue == NULL) {
		printf("(PQueue NULL) \n");
	}
	else if (1 /* test empty */) {
		printf("(PQueue Empty) \n");
	}
	else {
		printf("PQueue contents (front to end): \n");

		/* complete */

		printf("\n------------------------------ \n");
	}
}
