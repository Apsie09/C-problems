#include <stdio.h>

void main()
{
	int maxValue = 0;
	int aMax = 0;
	int bMax = 0;

	for (int a = 0; a < 20; a++)
	{
		int b = 20 - a;
		int result = a * a * b;


		if (result > maxValue)
		{
			maxValue = result;
			aMax = a;
			bMax = b;
		}
	}

	printf("The maximum value of a^2 * b is %d when a is %d and b is %d", maxValue, aMax, bMax);



}