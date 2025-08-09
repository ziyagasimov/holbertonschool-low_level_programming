#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10
 * starting from 0, using only putchar twice and no char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48); /* 48 is ASCII value of '0' */

	putchar('\n');

	return (0);
}

