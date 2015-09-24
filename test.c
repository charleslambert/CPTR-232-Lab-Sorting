#include "test.h"

int main() {
	testSwap();
	testBubbleSort();
	testSelectSort();
	testInsertSort();
	return 0;
}

void testSwap() {
	int array[] = {1,2,3};
	
	printf("Test Swap\n");

	printf("Test 1\n");
	swap(array,0,2);
	assert(array[0]==3);
	assert(array[2]==1);

	printf("Test 2\n");
	swap(array,0,1);
	assert(array[0]==2);
	assert(array[1]==3);

	printf("Tests Passed\n");
}

void testBubbleSort() {
	int array[]={5,9,8,3};
	int i;

	printf("Test BubbleSort\n");

	printf("Test 1\n");
	bubbleSort(array,4);
	assert(array[0]==3);
	assert(array[1]==5);
	assert(array[2]==8);
	assert(array[3]==9);

	printf("Tests Passed\n");
}

void testSelectSort() {
	int array[]={5,9,8,3};
	int i;

	printf("Test SelectSort\n");

	printf("Test 1\n");
	bubbleSort(array,4);
	assert(array[0]==3);
	assert(array[1]==5);
	assert(array[2]==8);
	assert(array[3]==9);

	printf("Tests Passed\n");
}

void testInsertSort() {
	int array[]={5,9,8,3};
	int i;

	printf("Test InsertSort\n");

	printf("Test 1\n");
	bubbleSort(array,4);
	assert(array[0]==3);
	assert(array[1]==5);
	assert(array[2]==8);
	assert(array[3]==9);

	printf("Tests Passed\n");
}