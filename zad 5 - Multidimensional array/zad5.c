#include <stdio.h>

#define RowSize 5
#define ColSize 5


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

	int sum = 0;

	for (int x = 0; x < RowSize; x++)
	{
		for (int y = 0; y < ColSize; y++)
		{
			if (x == y)
			{
				sum += arr[x][y];
			}
		}
	}

	printf("The sum of the diagonal is %d", sum);


}