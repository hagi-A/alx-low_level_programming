#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: the string to look at
 * Return: the capitalized string (Success)
 */

char *cap_string(char *a)
{
	int x, y;
	int trigger;
	char nots[] = ",;.!?(){}\nt\" ";

	for (x = 0, trigger = 0; a[x] != '\0'; x++)
	{
		if (a[0] > 96 && a[0] < 123)
		{
			trigger = 1;
		}
		for (y = 0; nots[y] != '\0'; y++)
		{
			if (nots[y] == a[x])
			{
				trigger = 1;
			}
		}
		if (trigger)
		{
			if (a[x] > 96  && a[x] < 123)
			{
				a[x] -= 32;
				trigger = 0;
			}
			else if (a[x] > 64 && a[x] < 91)
				trigger = 0;
			else if (a[x] > 47 && a[x] < 58)
				trigger = 0;
		}
	}
	return (a);
}
