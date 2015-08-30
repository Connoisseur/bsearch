/* File main.c */
#include "search.h"

#include <stdio.h>

int main(){

	int array[] = {-4, -2, 0, 3, 4, 5, 7, 9, 12, 23, 67, 78, 80, 80, 82, 90, 100, 200, 202,
					210, 230, 240, 250};

	short isFound = 0;
	int result = bsearch(array, sizeof(array) / sizeof(int), -1, &isFound);

	if (isFound)
		printf("Result: %d\n", result);
	else
		printf("Not found\n");

	return 0;
}



