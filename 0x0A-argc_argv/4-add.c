#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Variable decleration*/
	unsigned int check;

	check = 0;
	while (check < strlen(str)) /*string counter*/

	{
		if (!isdigit(str[check])) /*check in string if there are num*/
		{
			return (0);
		}

		check++;
	}
	return (1);
}

/**
 * main - Print program name
 * @argc: Count argument
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int check;
	int string_to_int;
	int sum = 0;

	check = 1;
	while (check < argc) /*checks the whole array*/
	{
		if (check_num(argv[check]))

		{
			string_to_int = atoi(argv[check]);
			sum += string_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		check++;
	}

	printf("%d\n", sum);

	return (0);
}
