#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int y, z, longq;

	longq = 0;

	for (y = 0; str[y] != '\0'; y++)
		longq++;
	z = (longq / 2);
	if ((longq % 2) == 1)
		z = ((longq + 1) / 2);

	for (y = z; str[y] != '\0'; y++)
		_putchar(str[y]);
	_putchar('\n');
}
