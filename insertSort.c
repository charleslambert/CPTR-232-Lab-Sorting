#include "insertSort.h"

int *insertSort(int array[], int len) {
	int i;
	int j;
	int snum;

	for(i=1;i<len;i++) {
	//snum is the selected number to be inserted
		snum=array[i];
		
		j=i-1;
		while (i>0 && array[j]>snum) {
		//Shifts the the numbers in the array
		//before insertion
			array[j+1]=array[j];
			j=j-1;
		}

		array[j+1]= snum;
		//insertion of the number
	}

	return array;
}