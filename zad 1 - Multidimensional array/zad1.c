#include <stdio.h>

#define RowSize 3
#define ColSize 3
#define DiagSize 3

void main()
{
	int arr[RowSize][ColSize][DiagSize];
	int br = 0;

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			for (size_t z = 0; z < DiagSize; z++)
			{
				br++;
				printf("%d\n", br);
			}
		}
	}




}