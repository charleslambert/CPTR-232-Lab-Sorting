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
	int subLen1= q-p+1;
	int subLen2= r-q;
	int subArray1[subLen1];
	int subArray2[subLen2];
	int i;
	int j;
	int k;

	for(i=0;i<subLen1;i++) {
		subArray1[i]=array[p+i];
	}

	for(j=0;j<subLen2;j++) {
		subArray2[j]=array[q+j+1];
	}
	printf("help\n");
	printResult(subArray1,subLen1);
	printResult(subArray2,subLen2);

	i=0;
	j=0;


	//dont use sentinals
	for(k=p;k<r;k++) {
		if(subArray1[i]<=subArray2[j] && i<subLen1) {
			array[k]=subArray1[i];
			i=i+1;
		}
		else {
			if (j<subLen2) {
				array[k]=subArray2[j];
				j=j+1;
			}
		}
	}
}