#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int countA = 0;

	while (*(s + countA) != '\0')
		countA++;
	return (countA);
}
