#include <stdio.h>

#define RowSize 3
#define ColSize 4
void main()
{
	int A[RowSize][ColSize];

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("\n");

	int B[RowSize][ColSize];

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			printf("B[%d][%d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
	}

	int C[RowSize][ColSize];

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			C[i][j] = A[i][j] * B[i][j];
		}
	}

	printf("\n");

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			printf("C[%d][%d] = %d\n",i,j, C[i][j]);
		}
	}
}