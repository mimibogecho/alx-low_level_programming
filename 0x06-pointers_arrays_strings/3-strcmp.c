#include "main.h"


/**
 * _strcmp - Compares two strings
 * @s1: Firtst string to be compared
 * @s2: Second string to be compared with
 * Return: If str1 < str2, the negative difference of the first unmatched char.
 * If str1 == str2, 0
 * If str1 > str2, the postive difference of the unmatched char.
 */


int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && s1 == s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
