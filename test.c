#include "test.h"

int main() {
	testSwap();
	testBubbleSort();
	testSelectSort();
	testInsertSort();
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

	merge(sortArray1,4);
	printf("Tests Passed\n");
}