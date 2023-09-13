#include <stdio.h>

/**
 * main - positive or negative
 * Return: (success)
 */

int main(void)
{
	int n = '5';

	if (n > '0')
	{
		printf("positive");
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < '0')
	{
		return (-1);
	}
	return (0);
}
