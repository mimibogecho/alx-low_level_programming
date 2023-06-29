#include "main.h"

/**
 * _strncat - Appends src to dest but use n byte of src
 * @dest: Destination string
 * @src: Source string
 * @n: Byte of src to be used
 * Return: Dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0; /*destination*/
	int b = 0; /*lenght of the string */

	while (dest[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];
	return (dest);
}
