#include <stdio.h>
#include <stdlib.h>


/**
 * main - Program tha prints first 50 fibonacci
 * Return: Always 0
 */


int main(void)
{
	int a = 0;
	long b = 1, c = 2;

	while (a < 50)
	{
	if (a == 0)
		printf("%d", b);
	else if
		(a == 1)
		printf(", %ld", c);
	else
	{
	c += b;
	b = c - b;

	printf(", %ld", c);
	}
	++a;
	}
	printf("\n");
	return (0);

}
