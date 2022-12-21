#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @a: the string to encode
 * Return: encoded string (Success)
 */

char *rot13(char *a)
{
	int x, y;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
			if (a[x] == input[y])
			{
				a[x] = output[y];
				break;
			}
		}
	}
	return (a);
}
