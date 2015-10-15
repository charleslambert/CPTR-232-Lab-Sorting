#include "helperFunctions.h"

void printResult(int array[], int len) {
	//prints out the resulting sorted array in a 
	//pretty format
	int i;

	printf("[");
	for(i=0;i<len;i++) {
		if (i==len-1) {
			printf("%d",array[i]);
		}
		else {
			printf("%d,",array[i]);
		}
	}
	printf("]\n");
}

void swap(int array[], int i, int j) {
	//swaps two integers in an array based on there indeces
	int a = array[i];

	array[i]= array[j];
	array[j]= a;
}