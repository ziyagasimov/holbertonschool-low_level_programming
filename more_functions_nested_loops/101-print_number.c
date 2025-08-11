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
	int digit;
	int started = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648) /* Handle INT_MIN without overflow */
		{
			_putchar('2');
			n = 147483648; /* print the rest after '2' */
		}
		else
			n = -n;
	}

	while (n / divisor > 9)
		divisor *= 10;

	while (divisor >= 1)
	{
		digit = n / divisor;
		if (digit != 0 || started || divisor == 1)
		{
			_putchar(digit + '0');
			started = 1;
		}
		n %= divisor;
		divisor /= 10;
	}
}

