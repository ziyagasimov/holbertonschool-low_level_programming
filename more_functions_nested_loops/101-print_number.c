#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find the divisor to extract the leftmost digit */
	while (n / divisor > 9)
		divisor *= 10;

	/* Extract and print each digit */
	while (divisor >= 1)
	{
		_putchar((n / divisor) + '0');
		n = n % divisor;
		divisor /= 10;
	}
}

