#include <stdio.h>

/**
 * main - asking user's personal information
 * Return: Always (0) success
 */
int main(void)
{
	char name[20];

	scanf("%s", &name);

	printf("Hello there, %s", name);

	return (0);
}
