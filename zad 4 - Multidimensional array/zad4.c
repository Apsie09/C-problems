#include <stdio.h>

#define RowSize 7
#define ColSize 2

void main()
{
	int arr[RowSize][ColSize];

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		
			printf("arr[%d][%d]", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	int br1;
	int br2;
	int br3;

	for (size_t i = 0; i < RowSize; i++)
	{
		for (size_t j = 0; j < ColSize; j++)
		{
			if (arr[i][j] == 1)
			{
				br1++;
			}
			else if (arr[i][j] == 2)
			{
				br2++;
			}
			else if (arr[i][j] == 3)
			{
				br3++;
			}
		}
	}

	int mostFrequent;

	if (br1 >= br2 && br1 >= br3)
	{
		mostFrequent = 1;
	}
	if (br2 >= br1 && br2 >= br3)
	{
		mostFrequent = 2;
	}
	if (br3 >= br2 && br3 >= br1)
	{
		mostFrequent = 3;
	}

	printf("Most frequent: %d", mostFrequent);
}
