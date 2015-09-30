#include "insertSort.h"

int *insertSort(int array[], int len) {
	int i;
	int j;
	int snum;

	for(i=1;i<len;i++) {
	//snum is the selected number to be inserted
		//printResult(array,4);
		snum=array[i];
		
		j=i;
		while (j>0 && array[j-1]>snum) {
		//Shifts the the numbers in the array
		//before insertion
			array[j]=array[j-1];
			j=j-1;
		}

		array[j]= snum;
		//insertion of the number
	}

	return array;
}