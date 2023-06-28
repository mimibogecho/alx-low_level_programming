#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that computes and prints the sum of all multiples
 * Return: Always 0
 */

int main(void)
{
	int a = 0;
	int b;

	while (b < 1024)
	{
	if ((b % 3 == 0) || (b % 5 == 0))
	{
	a += b;
	}
		b++;
	}
	printf("%d\n", a);
	return (0);
}
