#include "helperFunctions.h"
#include <math.h>

int *heapSort(int A[], int len);
int *maxHeapify(int A[], int len, int i);
int *buildMaxHeap(int A[], int len);
int left(int i);
int right(int i);