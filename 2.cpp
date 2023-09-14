#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main2 () 
{
	int mas[10], max, min;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 100;
		printf("%d ", mas[i]);
	}
	printf("\n");

	return 0;
}