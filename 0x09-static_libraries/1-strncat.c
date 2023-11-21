#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int countA = 0, countB = 0;

	while (*(dest + countA) != '\0')
	{
		countA++;
	}

	while (countB < n)
	{
		*(dest + countA) = *(src + countB);
		if (*(src + countB) == '\0')
			break;
		countA++;
		countB++;
	}
	return (dest);
}
