#include "heapSort.h"

int *heapSort(int A[], int len) {
	int i = len-1;

	A = buildMaxHeap(A, len);
	for (i; i > 0; i--) {
		swap(A, 0, i);
		len--;
		A = maxHeapify(A, len, 0);
	}

	return A;
}

int *buildMaxHeap(int A[], int len) {
	int i = floor((len/2));

	for (i; i >= 0; i--) {
		maxHeapify(A, len, i);
	}

	return A;
}

int *maxHeapify(int A[], int len, int i) {
	int l = left(i);
	int r = right(i);
	int largest;

	if ((l <= len-1) && (A[l] > A[i])) {
		largest = l;
	}
	else {
		largest = i;
	}

	if ((r <= len-1) && (A[r] > A[largest])) {
		largest = r;
	}
	if (largest != i){
		swap(A, i, largest);
		maxHeapify(A, len, largest);
	}

	return A;
}

int left(int i) {
	return 2*i+1;
}

int right(int i) {
	return 2*i+2;
}