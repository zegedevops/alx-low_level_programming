#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}
	length--;

	while (length >= 0)
	{
	putchar(s[length]);
		length--;
	}
	putchar('\n');
}
