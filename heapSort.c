#include 'heapSort.h'

int *heapSort(int[] A, int len) {
	int i = 0;

	A = buildMaxHeap(A);
	for (i; i < len; i++;) {
		swap(0, i);
		len--;
		A = maxHeapify(A, 1);
	}

	return A;
}

int buildMaxHeap(int[] A, int len) {
	int i = floor((len/2));

	for (i; i > 0; i--;) {
		maxHeapify( A, i);
	}

	return A
}

int maxHeapify(int[] A, int len, int i) {
	int l = left(i);
	int r = right(i);
	int largest;

	if ((l <= len) && (A[l] > A[i])) {
		largest = l;
	}
	else {
		largest = i;
	}

	if ((r <= len) && (A[r] > A[largest])) {
		largest = r;
	}
	if (largest != i){
		swap(i, largest);
		maxHeapify(A, len, largest);
	}

	return A;
}

int left(int i) {
	return 2*i+1;
}

int right(int i) {
	return 2*i+2
}