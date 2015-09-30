#include "mergeSort.h"

int *mergeSort(int array[], int p, int r) {
	int q;

	if(p<r) {
		//printf("stop\n");
		q = ((p+r)/2);
		mergeSort(array,p,q);
		mergeSort(array,q+1,r);
		merge(array,p,q,r);
	}

	return array;
}