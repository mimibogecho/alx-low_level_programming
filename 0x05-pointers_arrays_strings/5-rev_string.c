#include "main.h"

/**
 * rev_string - Print string in reverse
 * @s: String to be printed
 * Return:
 */

void rev_string(char *s)
{
	int base = 0, head = 0;
	char t;

	while (s[head++])
	base++;

	for (head = base - 1; head >= base / 2; head--)
	{t = s[head];
	s[head] = s[base - head - 1];
	s[base - head - 1] = t;
	}
}
