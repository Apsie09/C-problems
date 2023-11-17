#include <stdio.h>

#define RowSize 5
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

	int biggest = 0;
	int index = 0;

	for (int i = 0; i < RowSize; i++) {
		int sum = 0;
		for (int j = 0; j < ColSize; j++) {
			sum += arr[i][j];
		}

		if (sum > biggest) {
			biggest = sum;
			index = i;
		}
	}

	printf("Row with the largest sum is row %d with sum: %d\n", index, biggest);


}