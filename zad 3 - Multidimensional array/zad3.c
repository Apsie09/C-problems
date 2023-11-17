#include <stdio.h>

#define RowSize 3
#define ColSize 3

void main()
{
	int arr[RowSize][ColSize];

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			printf("arr[%d][%d]", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	int smallestRow = 0;
	int smallestCol = 0;
	int minValue = arr[0][0];

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			if (arr[i][j] < minValue) {
				smallestRow = i;
				smallestCol = j;
				minValue = arr[i][j];
			}
		}
	}
	printf("The smallest element is arr[%d][%d]", smallestRow, smallestCol);


}