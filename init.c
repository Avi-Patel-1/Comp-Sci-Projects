#include <stdio.h>
#include "defs.h"

void initArray(element *theElements, FILE *input) {
	for (int i = 0; i < numElements; i++) {
		fscanf(input, "%d %14s %2s %24s %lf", &theElements[i].num, theElements[i].name, theElements[i].symbol, theElements[i].elementClass, &theElements[i].atomicWeight);
	}
}

