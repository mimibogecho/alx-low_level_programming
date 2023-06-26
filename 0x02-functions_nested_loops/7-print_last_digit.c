#include "main.h"

/**
 * print_last_digit - The function that prints the last digit
 * @c: The digit to be checked
 * Return: The value of the last digit c
 */

int print_last_digit(int c)

{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
