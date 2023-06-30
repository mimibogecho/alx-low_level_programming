#include "main.h"


/**
 * string_toupper - changes all lowercase to uppercase in string
 * @m: pointer
 * Return: m
 */


char *string_toupper(char *m)
{
	int b;

	b = 0;
	while (m[b] != '\0')
	{
		if (m[b] >= 'a' && m[b] <= 'z')

			m[b] = m[b] - 32;

		b++;
	}
	return (m);
}
