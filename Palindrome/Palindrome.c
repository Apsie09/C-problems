#include <stdio.h>
#include <string.h>
#define LENGTH 15

void main()
{
	char str1[LENGTH];

	printf("Enter your string: ");
	gets(str1);

	char reverse[LENGTH];

	size_t len = strlen(str1);

	char newStr[LENGTH];

	for (size_t i = 0; i < len; i++)
	{
		reverse[i] = str1[i];
		str1[i] = str1[len - 1 - i];
		newStr[len - 1 - i] = reverse[i];
	}

	if (strcmp(str1, newStr) == 0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
}