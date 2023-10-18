#include <stdio.h>

void isOddNumber(int a)
{
	if (a % 2 != 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
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
		isOddNumber(Num);
		return 0;
	}
}