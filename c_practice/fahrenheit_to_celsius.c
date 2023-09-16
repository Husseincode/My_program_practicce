#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: \n");

	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("celsius = %f\n", celsius);

	return (0);
}
