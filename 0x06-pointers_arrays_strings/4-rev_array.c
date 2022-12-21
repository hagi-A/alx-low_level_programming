#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array to reverse
 * @n: the number of elements in the array
 * Return: nothing (Success)
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
