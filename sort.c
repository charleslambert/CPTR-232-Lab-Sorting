#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	int array[(argc-2)];
	char *type;
	int i;
	char bubble[]="bubble";
	char insert[]="insert";
	char select[]="select";


	type=argv[1];
	//stores the type of sorting method

	for (i=2;i<argc;i++)
	//stores the numbers to be sorted in to an int array 
	{
		sscanf(argv[i],"%d",array+i-2);
	}

	if (0==strcmp(type,bubble))
	//Checks which type of sort is to be used and implaments that method
	{
		//bubbleSort
		printf("1\n");
	} 
	else if (0==strcmp(type,insert))
	{
		printf("2\n");
	} 
	else if (0==strcmp(type,select))
	{
		printf("3\n");
	}
	else
	{
		printf("0\n");
	}

}