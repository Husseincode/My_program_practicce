#include <stdio.h>

void declare(void)
{
	int a;
	float b;

	printf("%d, %f", a, b);
}

int main(void)
{
	declare();
	return (0);
}
