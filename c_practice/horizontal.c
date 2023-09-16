#include <stdio.h>
#include <string.h>

/**
 * main - A program that displays in table
 * Return: success (0) always
 */

int main(void)
{
	char purchase[30] = "Purchase";
	char item[] = "-item";

	strcat(purchase, item);

	printf("Item\t%s\tQuantity\n\tprice\t\tDate\n", purchase);
	return (0);
}
