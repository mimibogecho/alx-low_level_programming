#include <stdio.h>

/**
 * _strlen -Function that returns the lenght of a string
 * @s: The string to get the lenght
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
		lenght++;
	return (lenght);
}
