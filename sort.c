#include "sort.h"

int main(int argc, char *argv[]) {
	int count;
	int arrayLen;
	clock_t cStart,cEnd;
	double clocktime;
	int *array;
	char *type;
	int i;
	int j = 0;
	char bubble[]="bubble";
	char insert[]="insert";
	char select[]="select";
	char merge[]="merge";
	int *result;
	int unavailable=0;
	FILE *fp;
	int f;

	fp = fopen(argv[2], "r");

	while(f = fscanf(fp, "%d,", &i) > 0 ) {
	//check how many numbers are in the file
		j++;
	}
	arrayLen = j;

	array = (int*)calloc(j, sizeof(int));

	j = 0;
	while(f = fscanf(fp, "%d,", &i) > 0) {
	//desposits the numbers in the file into an array
		array[j] = i;
		j++;
	}

	fclose(fp);


	type=argv[1];
	//stores the type of sorting method

	cStart = clock();
	if (0==strcmp(type,bubble)) {
	//Checks which type of sort is to be used and implaments that method
		result= bubbleSort(array, (arrayLen));
	} 
	else if (0==strcmp(type,insert)) {
		result= insertSort(array, (arrayLen));
	} 
	else if (0==strcmp(type,select)) {
		result= selectSort(array, (arrayLen));
	}
	else if (0==strcmp(type,merge)) {
		result= mergeSort(array, 0,(arrayLen));
	}
	else {
		printf("Sorry that is not an available sorting method.\n");
		unavailable=1;
	}
	cEnd = clock();
	
	if (unavailable != 1) {
		//printResult(result, arrayLen);
		fp = fopen( strcat(type,"clock.txt"), "a");
		clocktime = (double)(cEnd-cStart)/CLOCKS_PER_SEC;
		fprintf(fp, "%f,",clocktime); 
		fclose(fp);
		free(array);
	}
}