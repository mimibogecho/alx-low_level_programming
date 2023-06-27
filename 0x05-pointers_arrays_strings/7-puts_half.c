#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return:
 */

void puts_half(char *str)
{
	int m = 0;
	int i;

	while (str[m] != '\0')
	{
	m++;
	}
	if (m % 2 == 1)
	{
	i = (m - 1) / 2;
	i += 1;
	}
	else
	{
	i = m / 2;
	}
	for (; i < m; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}	
