#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int x;
	int z;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; z < 52; z++)
		{
			if (s[x] == data1[z])
			{
				s[x] = datarot[z];
				break;
			}
		}
	}
	return (s);
}
