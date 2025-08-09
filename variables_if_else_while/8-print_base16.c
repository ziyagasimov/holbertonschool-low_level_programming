#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * using only putchar 3 times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (i = 10; i < 16; i++)
		putchar(i + 87); /* 87 = 'a' - 10 */

	putchar('\n');

	return (0);
}

