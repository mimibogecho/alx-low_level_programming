#include "main.h"

/**
 * puts2 -Prints every character of a string
 * @str: String to be analysed
 * Return:
 */

void puts2(char *str)
{
	int i;
	int m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	for (i = 0; i < m; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
