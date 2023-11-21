#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int countA = 0;

	while (countA >= 0)
	{
		*(dest + countA) = *(src + countA);
		if (*(src + countA) == '\0')
			break;
		countA++;
	}
	return (dest);
}
