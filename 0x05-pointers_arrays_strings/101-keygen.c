#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * password for 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int a, sum, z;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			z = 2772 - sum - '0';
			sum += z;
			putchar(z + '0');
			break;
		}
	}

	return (0);
}
