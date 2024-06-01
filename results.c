#include "defs.h"

void clearInputBuffer() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void printResults(int userChoice, element *theElements) {
	if (userChoice == 1) {
		char name[15];
		printf("Enter the name of the element: \n");
		if (scanf("%14s", name) != 1) {
			printf("Invalid input. Please try again.\n");
			clearInputBuffer();
			return;
		}

		for (int i = 0; i < numElements; i++) {
			if (strcasecmp(theElements[i].name, name) == 0) {
				printf("%s's symbol is %s\n", theElements[i].name, theElements[i].symbol);
				clearInputBuffer();
				return;
			}
		}
		printf("Element not found.\n");
		clearInputBuffer();
	} else if (userChoice == 2) {
		char symbol[3];
		printf("Enter the symbol of the element: \n");
		if (scanf("%2s", symbol) != 1) {
			printf("Invalid input. Please try again.\n");
			clearInputBuffer();
			return;
		}

		for (int i = 0; i < numElements; i++) {
			if (strcasecmp(theElements[i].symbol, symbol) == 0) {
				printf("%s's name is %s\n", theElements[i].symbol, theElements[i].name);
				clearInputBuffer();
				return;
			}
		}
		printf("Element not found.\n");
		clearInputBuffer();
	} else if (userChoice == 3) {
		char elementClass[25];
		int secondaryChoice;

		printf("\n1. alkali metals");
		printf("\n2. metalloids");
		printf("\n3. alkaline earth metals");
		printf("\n4. reactive nonmetals");
		printf("\n5. transition metals");
		printf("\n6. noble gases");
		printf("\n7. post-transition metals");
		printf("\n8. lanthanides");
		printf("\n9. actinides");
		printf("\n10. unknown properties\n\n");


		do {
			if (scanf("%d", &secondaryChoice) != 1 || secondaryChoice > 10 || secondaryChoice <1) {
				printf("ERROR: invalid menu number\n\n");
				clearInputBuffer();
			} else {
				break;
			}
		}while (1);
		clearInputBuffer();

		switch (secondaryChoice) {
			case 1: strcpy(elementClass, "alkali_metal"); break;
			case 2: strcpy(elementClass, "metalloid"); break;
			case 3: strcpy(elementClass, "alkaline_earth_metal"); break;
			case 4: strcpy(elementClass, "reactive_nonmetal"); break;
			case 5: strcpy(elementClass, "transition_metal"); break;
			case 6: strcpy(elementClass, "noble_gas"); break;
			case 7: strcpy(elementClass, "post_transition_metal"); break;
			case 8: strcpy(elementClass, "lanthanides"); break;
			case 9: strcpy(elementClass, "actinides"); break;
			case 10: strcpy(elementClass, "unknown properties"); break;
			default:
						printf("ERROR: invalid menu number\n\n");
						return;
		}

		printf("\n");
		for (int i = 0; i < numElements; i++) {
			if (strcmp(theElements[i].elementClass, elementClass) == 0) {
				printf("%3d %13s %3s %8.4lf\n", theElements[i].num, theElements[i].name, theElements[i].symbol, theElements[i].atomicWeight);
			}
		}
	} else {
		printf("Invalid choice. Please try again.\n");
		clearInputBuffer();
	}
}
