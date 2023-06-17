#include <stdio.h>

/**
 * main -  program that prints all single digit numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int w;

	for (w = 0; w < 10; w++)
		putchar((w % 10) + '0');
	putchar('\n');

	return (0);

}
