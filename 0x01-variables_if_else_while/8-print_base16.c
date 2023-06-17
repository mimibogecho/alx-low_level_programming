#include <stdio.h>

/**
 * main - Program that prints all the number of base 16
 *
 * Return: 0
 */

int  main(void)
{
	int b;/*for numbers*/
	int k;/*for alphabets*/

for (b = 0; b < 10; b++)
	putchar((b % 10) + '0');

for (k = 'a'; k <= 'f'; k++)
	putchar(k);
putchar('\n');

return (0);

}
