#include <stdio.h>
#define PIE 3.142f

/**
 * sphere - calculates the volume of a sphere
 * main - calls the sphere
 * Return: 0 (success)
 */

void sphere(void)
{
	printf("Enter sphere radius: \n");

	float volume, radius;

	scanf("%f", &radius);

	volume = (4 * PIE * radius * radius * radius) / 3;

	printf("volume of the sphere is: %f", volume);
}

int main(void)
{
	sphere();
	return (0);
}
