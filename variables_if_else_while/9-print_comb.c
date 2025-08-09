#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * using only putchar (max 4 times) and no char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48); /* Convert int to corresponding ASCII digit */

		if (i != 9)
		{
			putchar(44); /* ASCII for ',' */
			putchar(32); /* ASCII for space ' ' */
		}
	}

	putchar(10); /* ASCII for newline '\n' */

	return (0);
}

