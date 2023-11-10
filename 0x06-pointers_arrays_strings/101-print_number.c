#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n7;

	n7 = n;
	if (n < 0)
	{
		_putchar('-');
		n7 = -n;
	}
	if (n7 / 10 != 0)
	{
		print_number(n7 / 10);
	}
	_putchar((n7 % 10) + '0');
}
