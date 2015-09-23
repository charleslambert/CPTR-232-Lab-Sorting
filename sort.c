#include <stdio.h>
#include <string.h>
#include "bubbleSort.h"

void printResult(int array[], int len);

int main(int argc, char *argv[]) {
	int array[(argc-2)];
	char *type;
	int i;
	char bubble[]="bubble";
	char insert[]="insert";
	char select[]="select";
	int *result;


	type=argv[1];
	//stores the type of sorting method

	for (i=2;i<argc;i++) {
	//stores the numbers to be sorted in to an int array 
		sscanf(argv[i],"%d",array+i-2);
	}

	if (0==strcmp(type,bubble)) {
	//Checks which type of sort is to be used and implaments that method
		result= bubbleSort(array, (argc-2));
	} 
	else if (0==strcmp(type,insert)) {
		printf("2\n");
	} 
	else if (0==strcmp(type,select)) {
		printf("3\n");
	}
	else {
		printf("0\n");
	}
	
	printResult(result, argc-2);
}

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