#include "test.h"

int main
{
	testSwap;
	return 0;
}

void testSwap()
{
	int array[] = {1,2,3};
	
	printf("Test Swap\n");

	printf("Test 1\n");
	swap(array,0,2);
	assert(array[0]==3);
	assert(array[2]==1);

	printf("Test 2");
	swap(array,0,1);
	assert(array[0]==2);
	assert(array[1]==3);

	printf("Tests Passed");
}