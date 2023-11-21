#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string converted
 *
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int j, e, o, len, g, digit;

	j = 0;
	e = 0;
	o = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && g == 0)
	{
		if (s[j] == '-')
			++e;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (e % 2)
				digit = -digit;
			o = o * 10 + digit;
			g = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}

	if (g == 0)
		return (0);

	return (o);
}

/**
 * main - multiply two numbers
 * @argc: numb of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int solution, numA, numB;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numA = _atoi(argv[1]);
	numB = _atoi(argv[2]);
	solution = numA * numB;

	printf("%d\n", solution);

	return (0);
}
