#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum11, z;

	sum1 = 0;
	sum11 = 0;

	for (z = 0; z < size; z++)
	{
		sum1 = sum1 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		sum11 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sum1, sum11);
}
