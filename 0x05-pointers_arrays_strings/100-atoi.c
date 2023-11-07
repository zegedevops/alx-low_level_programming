#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string converted
 * Return: the int converted from string
 */
int _atoi(char *s)
{
	int a, b, y, len, z, digit;

	a = 0;
	b = 0;
	y = 0;
	len = 0;
	z = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && z == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			y = y * 10 + digit;
			z = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			z = 0;
		}
		a++;
	}
	if (z == 0)
		return (0);

	return (y);
}
