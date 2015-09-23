#include "bubbleSort.h"

int *bubbleSort(int array[], int len) {
	int i;
	int j;
	//swapped true=1 false=0
	for(j=len-1;0<j;j--) {
		for(i=0;i<j;i++) {
			if (array[i]>array[i+1]) {
				swap(array,i,i+1);
			}
		}
	}

	return array;
}

void swap(int array[], int i, int j) {
	//swaps two integers in an array based on there indeces
	int a = array[i];

	array[i]= array[j];
	array[j]= a;
}