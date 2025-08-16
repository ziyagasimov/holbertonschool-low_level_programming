#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int sep;

	while (str[i] != '\0')
	{
		sep = 0;

		if (i == 0)
			sep = 1; 
		else if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			 str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			 str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			 str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			 str[i - 1] == '}')
			sep = 1;

		if (sep && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');

		i++;
	}

	return (str);
}
