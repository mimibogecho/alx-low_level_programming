#include "main.h"

/**
 * print_alphabet_x10 - printing in lowercase
 */

void print_alphabet_x10(void)
{
	char c;
	int d;

	d = 0;
while (d < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');

	d++;
	}

}





