#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *z = needle;

		while (*a == *z && *z != '\0')
		{
			a++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}
	return (0);
}
