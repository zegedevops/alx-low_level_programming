#include<stdio.h>

/**
* main - Entry point
*
* Description: print numbers of base16 in lower case
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num = 48; /*48; decimal representation of 0*/

	while (num <= 102) /*102, Decimal representation of f*/
	{
		putchar(num);

		/* after 9, theres a jump to 96; `*/
		if (num == 57)
			num += 39;
		++num;
	}
	putchar('\n');

	return (0);
}
