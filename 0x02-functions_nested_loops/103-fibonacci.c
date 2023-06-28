#include "main.h"
#include <stdlib.h>

/**
 * main - A program that finds and prints the sum of even-valued terms
 * Return: Always 0
 *
 */

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sm = c;

	while (c + b < 4000000)
	{
	c += b;
	if (c % 2 == 0)
		sm += c;
	b = c - b;
	++a;
	}
	printf("%ld\n", sm);
	return (0);
}
