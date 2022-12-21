#include "main.h"

/**
 * leet - replaces a bunch of numbers with letters
 * @a: the string to look at
 * Return: the new string (Success)
 */

char *leet(char *a)
{
	int x;
	int y;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; lower[y] != '\0' && upper[y] != '\0'; y++)
		{
			if (a[x] == lower[y] || a[x] == upper[y])
			{
				a[x] = num[y];
				break;
			}
		}
	}
	return (a);
}
