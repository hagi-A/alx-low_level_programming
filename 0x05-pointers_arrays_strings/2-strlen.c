#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: arg s
 * Return: String length
 */

long unsigned int _strlen(char *s)
{
	int i;
	
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
