#include <stdio.h>

#define RowSize 3
#define ColSize 3


void main()
{
	int arr[RowSize][ColSize] = { {1, 2, 3}, {5, 6, 7}, {9, 10, 11} };

	for (int i = 0; i < RowSize; i++)
	{
		for (int j = 0; j < ColSize; j++)
		{
			printf("%d     ", arr[i][j]);
		}
		printf("\n");
	}

	int Rotate[RowSize][ColSize];

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			Rotate[j][i] = arr[i][j];
		}
	}

	printf("\n");
	printf("Swapped col and rows:");
	printf("\n");


	printf("\n");
	for (int i = 0; i < RowSize; i++)
	{
		for (int j = 0; j < ColSize; j++)
		{
			printf("%d     ", Rotate[i][j]);
		}
		printf("\n");
	}





}