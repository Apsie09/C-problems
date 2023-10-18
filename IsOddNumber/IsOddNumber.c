#include <stdio.h>

int isOddNumber(int a)
{
	if (a % 2 != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int Num;

	printf("Enter a number: ");
	if (scanf("%d", &Num) != 1)
	{
		printf("Invalid input. Please enter an integer!");
		return 1;
	}
	else
	{
		int result = isOddNumber(Num);

		if (result == 1)
		{
			printf("Odd");
		}
		else
		{
			printf("Even");
		}
		return 0;
	}
}
