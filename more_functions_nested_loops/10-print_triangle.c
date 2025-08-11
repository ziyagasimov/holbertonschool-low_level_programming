#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle followed by a new line
 * @size: The size of the triangle
 *
 * If size is 0 or less, prints only a new line
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* print spaces */
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		/* print #'s */
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}

