#include "test.h"

int main() {
	testSwap();
	testMerge();
	testBubbleSort();
	testSelectSort();
	testInsertSort();
	testMergeSort();
	return 0;
}

void testSwap() {

	int array1[]= {1,2,3};
	int array2[]= {3,2,1};
	int array3[]= {2,3,1};

	printf("Test Swap\n");

	printf("Test 1\n");
	swap(array1,0,2);
	assert(memcmp(array1,array2,sizeof(array1))==0);

	printf("Test 2\n");
	swap(array1,0,1);
	assert(memcmp(array1,array3,sizeof(array1))==0);

	printf("Tests Passed\n");
}

void testMerge() {
	int p;
	int q;
	int r;
	int testA[] = {0,1};
	int testB[]	= {0,1,3};
	int testC[] = {0,1,2,4};
	int array1[] = {1,0};
	int array2[] = {3,0,1};
	int array3[] = {0,2,1,4};

	printf("Test merge\n");

	printf("Test 1\n");
	merge(array1,0,0,2);
	assert(memcmp(array1,testA,sizeof(array1))==0);

	printf("Test 2\n");
	merge(array2,0,0,3);
	assert(memcmp(array2,testB,sizeof(array2))==0);

	printf("Test 3\n");
	merge(array3,0,1,4);
	assert(memcmp(array3,testC,sizeof(array3))==0);

	printf("Test Passed\n");
}

void testBubbleSort() {
	int sortArray1[]={3,5,8,9};
	int sortArray2[]={-5,-2,5,10,20};
	int sortArray3[]={2,3,5,5};
	int disOArray[]={5,9,8,3};
	int revOArray[]={9,8,5,3};
	int negArray[]={-5,5,10,-2,20};
	int repArray[]={5,2,3,5};

	printf("Test bubbleSort\n");

	printf("Test Disordered Array.\n");
	assert(memcmp(bubbleSort(disOArray,4),sortArray1,sizeof(disOArray))==0);

	printf("Test Reverse Ordered Array.\n");
	assert(memcmp(bubbleSort(revOArray,4),sortArray1,sizeof(revOArray))==0);

	printf("Test Negatives in Array.\n");
	assert(memcmp(bubbleSort(negArray,5),sortArray2,sizeof(negArray))==0);

	printf("Test Empty Array.\n");
	assert(bubbleSort(NULL,1)==NULL);

	printf("Test Repeats in Array.\n");
	assert(memcmp(bubbleSort(repArray,4),sortArray3,sizeof(repArray))==0);

	printf("Test Ordered Array.\n");
	assert(memcmp(bubbleSort(sortArray1,4),sortArray1,sizeof(sortArray1))==0);
	
	printf("Tests Passed\n");
}

void testSelectSort() {
	int sortArray1[]={3,5,8,9};
	int sortArray2[]={-5,-2,5,10,20};
	int sortArray3[]={2,3,5,5};
	int disOArray[]={5,9,8,3};
	int revOArray[]={9,8,5,3};
	int negArray[]={-5,5,10,-2,20};
	int repArray[]={5,2,3,5};

	printf("Test selectSort\n");

	printf("Test Disordered Array.\n");
	assert(memcmp(selectSort(disOArray,4),sortArray1,sizeof(disOArray))==0);

	printf("Test Reverse Ordered Array.\n");
	assert(memcmp(selectSort(revOArray,4),sortArray1,sizeof(revOArray))==0);

	printf("Test Negatives in Array.\n");
	assert(memcmp(selectSort(negArray,5),sortArray2,sizeof(negArray))==0);

	printf("Test Empty Array.\n");
	assert(selectSort(NULL,1)==NULL);

	printf("Test Repeats in Array.\n");
	assert(memcmp(selectSort(repArray,4),sortArray3,sizeof(repArray))==0);

	printf("Test Ordered Array.\n");
	assert(memcmp(selectSort(sortArray1,4),sortArray1,sizeof(sortArray1))==0);
	
	printf("Tests Passed\n");
}

void testInsertSort() {
	int sortArray1[]={3,5,8,9};
	int sortArray2[]={-5,-2,5,10,20};
	int sortArray3[]={2,3,5,5};
	int disOArray[]={5,9,8,3};
	int revOArray[]={9,8,5,3};
	int negArray[]={-5,5,10,-2,20};
	int repArray[]={5,2,3,5};

	printf("Test insertSort\n");

	printf("Test Disordered Array.\n");
	assert(memcmp(insertSort(disOArray,4),sortArray1,sizeof(disOArray))==0);

	printf("Test Reverse Ordered Array.\n");
	assert(memcmp(insertSort(revOArray,4),sortArray1,sizeof(revOArray))==0);

	printf("Test Negatives in Array.\n");
	assert(memcmp(insertSort(negArray,5),sortArray2,sizeof(negArray))==0);

	printf("Test Empty Array.\n");
	assert(insertSort(NULL,1)==NULL);

	printf("Test Repeats in Array.\n");
	assert(memcmp(insertSort(repArray,4),sortArray3,sizeof(repArray))==0);

	printf("Test Ordered Array.\n");
	assert(memcmp(insertSort(sortArray1,4),sortArray1,sizeof(sortArray1))==0);

	printf("Tests Passed\n");
}

void testMergeSort() {
	int sortArray1[]={3,5,8,9};
	int sortArray2[]={-5,-2,5,10,20};
	int sortArray3[]={2,3,5,5};
	int sortArray4[]={2,3,5,6,10};
	int disOArray[]={5,9,8,3};
	int revOArray[]={9,8,5,3};
	int negArray[]={-5,5,10,-2,20};
	int repArray[]={5,2,3,5};
	int unevenArray[]={5,3,10,2,6};


	printf("Test mergeSort\n");

	printf("Test Disordered Array.\n");
	assert(memcmp(mergeSort(disOArray,0,4),sortArray1,sizeof(disOArray))==0);

	printf("Test Reverse Ordered Array.\n");
	assert(memcmp(mergeSort(revOArray,0,4),sortArray1,sizeof(revOArray))==0);

	printf("Test Negatives in Array.\n");
	assert(memcmp(mergeSort(negArray,0,5),sortArray2,sizeof(negArray))==0);

	printf("Test Empty Array.\n");
	assert(mergeSort(NULL,0,1)==NULL);

	printf("Test Repeats in Array.\n");
	assert(memcmp(mergeSort(repArray,0,4),sortArray3,sizeof(repArray))==0);

	printf("Test Ordered Array.\n");
	assert(memcmp(mergeSort(sortArray1,0,4),sortArray1,sizeof(sortArray1))==0);

	printf("Test Uneven Subarray.\n");
	assert(memcmp(mergeSort(unevenArray,0,5),sortArray4,sizeof(unevenArray))==0);
	
	printf("Tests Passed\n");
}

void testHeapSort() {
	int sortArray1[]={3,5,8,9};
	int sortArray2[]={-5,-2,5,10,20};
	int sortArray3[]={2,3,5,5};
	int sortArray4[]={2,3,5,6,10};
	int disOArray[]={5,9,8,3};
	int revOArray[]={9,8,5,3};
	int negArray[]={-5,5,10,-2,20};
	int repArray[]={5,2,3,5};
	int unevenArray[]={5,3,10,2,6};


	printf("Test heapSort\n");

	printf("Test Disordered Array.\n");
	assert(memcmp(heapSort(disOArray,4),sortArray1,sizeof(disOArray))==0);

	printf("Test Reverse Ordered Array.\n");
	assert(memcmp(heapSort(revOArray,4),sortArray1,sizeof(revOArray))==0);

	printf("Test Negatives in Array.\n");
	assert(memcmp(heapSort(negArray,5),sortArray2,sizeof(negArray))==0);

	printf("Test Empty Array.\n");
	assert(heapSort(NULL,1)==NULL);

	printf("Test Repeats in Array.\n");
	assert(memcmp(heapSort(repArray,4),sortArray3,sizeof(repArray))==0);

	printf("Test Ordered Array.\n");
	assert(memcmp(heapSort(sortArray1,4),sortArray1,sizeof(sortArray1))==0);

	printf("Test Uneven Subarray.\n");
	assert(memcmp(heapSort(unevenArray,5),sortArray4,sizeof(unevenArray))==0);
	
	printf("Tests Passed\n");
}