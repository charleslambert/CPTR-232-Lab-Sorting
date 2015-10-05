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

void merge(int array[],int p, int q, int r) {
	int lALen= q-p+1;
	int rALen= r-q-1;
	int leftA[lALen];
	int rightA[rALen];
	int i,j,k;

	for(i=0;i<lALen;i++) {
		leftA[i]=array[p+i];
	}

	for(j=0;j<rALen;j++) {
		rightA[j]=array[q+j+1];
	}

	i=0;
	j=0;

	for(k=p;k<r;k++) {
		if(i>=lALen || (j<rALen && leftA[i]>rightA[j])) {
			array[k]=rightA[j];
			j++;
		}
		else {
			array[k]=leftA[i];
			i++;
		}
	}
}