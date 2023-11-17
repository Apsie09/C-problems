#include <stdio.h>
#include <math.h>

#define RowSize 10
#define ColSize 3


void main()
{
	int array[RowSize][ColSize];

	for (int i = 0; i < RowSize; i++) {

		printf("Enter a number for row %d: ", i + 1);
		scanf("%d", &array[i][0]);

		array[i][1] = array[i][0] * array[i][0];

		array[i][2] = array[i][0] * array[i][0] * array[i][0];
	}

	printf("\nResulting Array:\n");
	for (int i = 0; i < RowSize; i++)
	{
		printf("%d\t%d\t%d\n", array[i][0], array[i][1], array[i][2]);
	}

}