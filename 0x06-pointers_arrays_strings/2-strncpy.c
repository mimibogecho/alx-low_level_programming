#include "main.h"

/**
 * _strncpy - Copies strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of byte to copy from src
 * Return: Dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0; /*src lenght*/

	while (src[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];

	for (a = b; a < n; a++)
		dest[a] = '\0';
	return(dest);
}
