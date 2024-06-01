#include "defs.h"

int main(int argc, char* argv[]) {
	FILE* inFile;
	element* periodicTable;

	if (argc != 2) {
		fprintf(stderr, "ERROR: forgot to provide the input file name\n");
		exit(1);
	}

	inFile = fopen(argv[1], "r");
	if (inFile == NULL) {
		fprintf(stderr, "ERROR: file missing or name incorrect\n");
		exit(2);
	}

	periodicTable = (element*)malloc(numElements * sizeof(element));
	initArray(periodicTable, inFile);
	fclose(inFile);

	int choice;

	do {
		choice = printMenu();

		if (choice == 4) {
			break;
		}

		printResults(choice, periodicTable);
		if (choice != 4) {
			int goAgain;
			do {
				printf("Go again? 1 for yes, 0 for no: \n");

				scanf("%d", &goAgain);

			} while (goAgain !=1 && goAgain != 0);

			if (!goAgain) {
				break;
			}
		}
	} while (1);

	free(periodicTable);
	return 0;
}
