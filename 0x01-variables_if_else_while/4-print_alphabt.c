#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)

{
int c;

	c = 'a';
	while
	(c <= 'z')
{
	if (c == 'e' || c == 'q')
{
	c += 1;
}
	else
{
	putchar(c);
	c += 1;
}
}

putchar('\n');

return (0);
}

