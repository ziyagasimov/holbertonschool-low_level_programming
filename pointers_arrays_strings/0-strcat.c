#include "main.h"

/**
 * _strcat - concatenates the string pointed to by src to the end of dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add null terminator */
	dest[i] = '\0';

	return (dest);
}
