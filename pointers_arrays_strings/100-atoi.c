#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer safely
 * @s: pointer to the string
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > (INT_MAX - (s[i] - '0')) / 10)
		{
			/* handle overflow */
			return (sign == 1 ? INT_MAX : INT_MIN);
		}

		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
