#include "selectSort.h"
#include "bubbleSort.h"

int *selectSort(int array[], int len) {
	int i;
	int j;
	int min;

	for(i=0;i<len-1;i++) {
		
		min=i;
		for(j=i+1;j<len;j++) {
			if (array[j]<array[min]) {
				min=j;
			}
		}
		if (min != i) {
			swap(array, min, i);
		}
	}

	return array;
}