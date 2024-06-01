#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define numElements 118

typedef struct {
	int num;
	char name[15];
	char symbol[3];
	char elementClass[25];
	double atomicWeight;
} element;

void initArray(element * theElements, FILE * input); 
int printMenu();
void printResults(int userChoice, element * theElements);


#endif

