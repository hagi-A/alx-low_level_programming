#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string @src is added to
 * @src: the string to be appended
 * Return: pointer to the resulting string @dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
