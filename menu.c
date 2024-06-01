#include "defs.h"

int printMenu() {
	int choice;

	do {
		printf("\n1. Enter the name of the element to find its symbol.");
		printf("\n2. Enter the symbol of the element to find its name.");
		printf("\n3. List elements by class:");
		printf("\n4. Quit program.\n\n");
		scanf("%d", &choice);

		if (choice == 4) {
			return choice; // Return immediately if the user chooses to quit
		}

		if (choice == 1 || choice == 2 || choice == 3) {
			return choice;
	}

		do {
			if (choice > 4 || choice < 1) 
				printf("ERROR: invalid menu number\n\n");
			scanf("%d", &choice);
		} while (choice < 1 || choice > 4);


	} while (choice < 1 || choice > 4);

	return choice;
}
