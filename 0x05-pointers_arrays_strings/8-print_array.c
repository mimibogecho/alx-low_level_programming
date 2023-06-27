#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n element of an array of integers
 * @a: Arrays of integers
 * @n: Number of elements of the arrays
 * Return:
 */


void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
