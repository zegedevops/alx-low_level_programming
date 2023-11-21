#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int z = 0;

	while (str[z])
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
