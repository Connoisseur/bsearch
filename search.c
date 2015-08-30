/* File search.c */

#include "search.h"

int bsearch(int *array, unsigned int count, int x, short *isFound)
{
	/* Check last index in array
	*/
	if (array[count - 1] <= x) {
		isFound = 0;
		return 0;
	}

	int *index;
	int *regionBegin = array;
	int *regionEnd = array + count;
	

	/* Main cycle
	*/
	while((regionEnd - regionBegin) != 1) {

		index = regionBegin + ((regionEnd - regionBegin) / 2);		
		*index > x ? (regionEnd = index) : (regionBegin = index);
	}

	*isFound = 1;
	return *regionEnd;
}


