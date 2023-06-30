#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @string: characters in a string to be capitalized
 * Return: to changed string
 */

char *cap_string(char *string)
{
	int b = 0;

	while (string[b])
	{
	while (!(string[b] >= 'a' && string[b] <= 'z'))
		b++;
	if (string[b - 1] == ' ' ||
	string[b - 1] == '\t' ||
	string[b - 1] == '\n' ||
	string[b - 1] == ',' ||
	string[b - 1] == ';' ||
	string[b - 1] == '.' ||
	string[b - 1] == '!' ||
	string[b - 1] == '?' ||
	string[b - 1] == '"' ||
	string[b - 1] == '(' ||
	string[b - 1] == ')' ||
	string[b - 1] == '{' ||
	string[b - 1] == '}' ||

	b == 0)
		string[b] -= 32;
	b++;
	}
	return (string);
}

