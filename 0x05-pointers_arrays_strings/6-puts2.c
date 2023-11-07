#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longz = 0;
	int b = 0;
	char *a = str;
	int o;

	while (*a != '\0')
	{
		a++;
		longz++;
	}
	b = longz - 1;
	for (o = 0 ; o <= b ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
