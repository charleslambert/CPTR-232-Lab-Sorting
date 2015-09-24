#include "selectSort.h"
#include "bubbleSort.h"

int *selectSort(int array[], int len) {
	int i;
	int j;
	int min;

	for(i=0;i<len-1;i++) {
		
		min=i;
		//select a minimum value
		for(j=i+1;j<len;j++) {
		//search the arre for a value that is less than
		//than the minimum
			if (array[j]<array[min]) {
				min=j;
			}
		}
		if (min != i) {
		//swap the minimum with the smaller value
			swap(array, min, i);
		}
	}

	return array;
}