#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of a number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	uint64_t number = 612852475143;
	uint64_t largestPrimeFactor = 0;
	uint64_t i;

	while (number % 2 == 0)
	{
		largestPrimeFactor = 2;
		number /= 2;
	}
	for (i = 3; i * i <= number; i += 2)
	{
		uint64_t factorCount = 0;

		while (number % i == 0)
		{
			largestPrimeFactor = i;
			number /= i;
			factorCount++;
		}
	}
	if (number > 1)
	{
		largestPrimeFactor = number;
	}
	printf("%lu\n", largestPrimeFactor);
	return (0);
}
