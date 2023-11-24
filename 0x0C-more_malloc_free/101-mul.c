#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - check string contains non-digit char
 * @s: string evaluated
 *
 * Return: 0 when non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int z = 0;

	while (s[z])
	{
		if (s[z] < '0' || s[z] > '9')
			return (0);
		z++;
	}
	return (1);
}

/**
 * _strlen - return length of a string
 * @s: string to evaluate
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * errors - handle error for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len, len1, len2, z, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (z = 0; z <= len2 + len1; z++)
		result[z] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (z = 0; z < len - 1; z++)
	{
		if (result[z])
			a = 1;
		if (a)
			_putchar(result[z] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

