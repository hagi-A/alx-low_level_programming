#include "main.h"

/**
 * _strncpy - copies a string to another string
 * @dest: the buffer
 * @src: the string to be copied
 * @n: the number of bytes to include in @dest
 * Return: pointer to the resulting string @dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
