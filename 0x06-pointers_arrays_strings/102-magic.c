#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program demonstrates the use of an integer array and a pointer.
 * It initializes an integer array 'a' with 5 elements and assigns the
 * value 1024 to the element at index 2. It also declares an integer
 * variable 'n' and a pointer 'p', assigning the address of 'n' to 'p'.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
