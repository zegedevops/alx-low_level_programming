#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate a string.
 * @str: string.
 * Return: pointer to string if success.
 */

char *_strdup(char *str)
{
	int z;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)
	;
	z++;
	str1 = malloc(sizeof(char) * z);

	if (str1 == NULL)
		return (NULL);

	for (z = 0; str[z] != '\0'; z++)
		str1[z] = str[z];
	str1[z] = '\0';
	return (str1);
}
