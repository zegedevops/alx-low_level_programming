#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int z = 0;

	for (; *(s + z) != '\0'; z++)
		if (*(s + z) == c)
			return (s + z);
	if (*(s + z) == c)
		return (s + z);
	return ('\0');
}
