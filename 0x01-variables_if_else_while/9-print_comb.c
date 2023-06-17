#include <stdio.h>

/**
 * main - Program that prints all possible combinations of single digitnumbers
 *
 * Return: 0
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
	if (a != '9')

	{
		putchar(',');
		putchar(' ');


	}
	++a;

	}
putchar('\n');
return (0);

}
