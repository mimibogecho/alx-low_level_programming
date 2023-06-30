#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: an array of integers to be reversed
 * @n: the number of elements to swap in the array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;

	}
}
