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

void merge(int array[],int len) {
	int subLen1= len/2;
	int subLen2= len-subLen1;
	int subArray1[subLen1];
	int subArray2[subLen2];
	int i;
	int j;
	int k;

	for(i=0;i<subLen1;i++) {
		subArray1[i]=array[i];
	}

	for(j=0;j<subLen2;j++) {
		subArray2[j]=array[subLen2+j];
	}
	printf("2\n");
	printResult(subArray1,2);
	printResult(subArray2,2);
	i=0;
	j=0;


	//dont use sentinals
	for(k=0,k<len,k++) {
		if(subArray1[i]<=subArray2[j]) {
			array[k]=subArray1[i];
			i=i+1;
		}
		else {

		}
	}
}