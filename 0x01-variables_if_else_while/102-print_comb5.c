#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main -Entry point
 *
 *Return: 0 (success)
 *
 */

int main(void)

{
	int a;/*first number*/
	int b;/*second number*/

	for (a = 0; a <= 98; a++)
	{
	for (b = a + 1; b <= 99; b++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar(' ');
putchar((b / 10) + '0');
putchar((b % 10) + '0');
	if (a == 98 && b == 99)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
