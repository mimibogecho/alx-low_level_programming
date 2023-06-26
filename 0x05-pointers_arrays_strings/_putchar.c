#include <unistd.h>
#include "main.h"

/**
 * main - program that prints _putchar
 *
 * return: 1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
