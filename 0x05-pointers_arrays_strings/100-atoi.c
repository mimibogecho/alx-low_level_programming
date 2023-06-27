#include "main.h"

/**
 * _atoi - It converts a string to an integer
 * @s: String to convert
 * Return: Integer
 */

int _atoi(char *s)
{
	int d = 0;
	unsigned int bi = 0;
	int m = 1;
	int i;

	while (s[d])
	{
	if (s[d] == 45)
	{
	m *= -1;
	}
	while (s[d] >= 48 && s[d] <= 57)
	{
		i = 1;
	bi = (bi * 10) + (s[d] - '0');
	d++;
	}
	if (i == 1)
	{
		break;
	}
	d++;
	}
	bi *= m;
	return (bi);
}
