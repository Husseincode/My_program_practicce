#include <stdio.h>

/**
 * main - value of pie 3.142
 * Return: 0 (success)
 */

void pie(void)
{
	const float PIE = 3.142;

	printf("%.3f\n", PIE);
}

int main(void)
{
	pie();
	return (0);
}
