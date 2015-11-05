#include "mergeSort.h"

int *mergeSort(int array[], int p, int r) {
	int q;
	if(array==NULL){
		return NULL;
	}
	else {
		if(p<r-1) {
			//printf("stop\n");
			q = ((p+r)/2)-1;
			mergeSort(array,p,q+1);
			mergeSort(array,q+1,r);
			merge(array,p,q,r);
		}
	}

		return array;
}

void merge(int array[],int p, int q, int r) {
	//Combine step in merge sort
	int lALen= q-p+1;
	int rALen= r-q-1;
	int leftA[lALen];
	int rightA[rALen];
	int i,j,k;

	//Seperate the Array into two equal subarrays
	for(i=0;i<lALen;i++) {
		leftA[i]=array[p+i];
	}

	for(j=0;j<rALen;j++) {
		rightA[j]=array[q+j+1];
	}

	i=0;
	j=0;
	
	//compare and sort the subarrays back into the main array
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