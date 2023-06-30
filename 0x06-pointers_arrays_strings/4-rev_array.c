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

	for (c = n - 1; c > n / 2; c--)
	{
		b = a[n - 1 - b];
	a[n - 1 - c] = a[c];
	a[c] = b;
	}
}
