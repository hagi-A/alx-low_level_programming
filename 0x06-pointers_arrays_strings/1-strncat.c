#include "main.h"

/**
 * _strncpy - concatinates two strings using atmost n bytes from src
 * @dest: the buffer
 * @src: the string to be copied
 * @n: the number of bytes to include in @dest
 * Return: pointer to the resulting string @dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
