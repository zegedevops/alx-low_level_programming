#include <stdlib.h>
#include "main.h"

/**
 * _memset - fill mem with constant byte
 * @s: mem area thats filled
 * @b: character thats copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}

	return (s);
}

/**
 * _calloc - allocates mem for array
 * @nmemb: num of elements in array
 * @size: size of each element
 *
 * Return: pointer to designated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *po;

	if (nmemb == 0 || size == 0)
		return (NULL);

	po = malloc(size * nmemb);

	if (po == NULL)
		return (NULL);

	_memset(po, 0, nmemb * size);

	return (po);
}

