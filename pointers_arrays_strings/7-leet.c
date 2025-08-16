#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; letters[j] != '\0'; j++)
			if (str[i] == letters[j])
			{
				str[i] = codes[j];
				break;
			}

	return (str);
}
