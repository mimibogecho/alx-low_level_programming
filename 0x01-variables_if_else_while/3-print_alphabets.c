#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)

{
	char c;
	char C;

	(c = 'a');
	(C = 'A');

	while
	(c <= 'z')
{
	putchar(c);
	c += 1;
}
	while
	(C <= 'Z')
{
	putchar(C);
	C += 1;
}
putchar('\n');

return (0);
}
