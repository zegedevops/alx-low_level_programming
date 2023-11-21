#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the min number of coins to
 * make change
 * @argc: numb of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int number, z, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (z = 0; z < 5 && number >= 0; z++)
	{
		while (number >= coins[z])
		{
			result++;
			number -= coins[z];
		}
	}

	printf("%d\n", result);
	return (0);
}

