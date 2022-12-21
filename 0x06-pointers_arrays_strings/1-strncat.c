#include "main.h"

/**
 * _strncat - concatinates two strings
 * @dest: the buffer
 * @src: the string to be copied
 * @n: the number of bytes to include in @dest
 * Return: pointer to the resulting string @dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int i;

	while (src[len1] != '\0')
	{
		len1++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
