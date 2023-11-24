#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates bytes of string to a diff string
 * @s1: string to append to diff string
 * @s2: string to concatenate from a diff string
 * @n: num of bytes 4rm s2 to concats to s1
 *
 * Return: pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int x = 0, y = 0, lenA = 0, lenB = 0;

	while (s1 && s1[lenA])
		lenA++;
	while (s2 && s2[lenB])
		lenB++;

	if (n < lenB)
		c = malloc(sizeof(char) * (lenA + n + 1));
	else
		c = malloc(sizeof(char) * (lenA + lenB + 1));

	if (!c)
		return (NULL);

	while (x < lenA)
	{
		c[x] = s1[x];
		x++;
	}

	while (n < lenB && x < (lenA + n))
		c[x++] = s2[y++];

	while (n >= lenB && x < (lenA + lenB))
		c[x++] = s2[y++];

	c[x] = '\0';

	return (c);
}
