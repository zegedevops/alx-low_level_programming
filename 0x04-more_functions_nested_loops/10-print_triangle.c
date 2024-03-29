#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters.
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				putchar(' ');
			}
			for (k = 1; k <= i * 2 - 1; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
