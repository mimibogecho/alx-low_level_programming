#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Genarates random valid passwords for a programme
 * Return: 0
 */

int main(void)
{
	char pass[84];
	int ind = 0, sm = 0, dif_half1, dif_half2;

	srand(time(0));

	while (sm < 2772)
	{
		pass[ind] = 33 + rand() % 94;
		sm += pass[ind++];
	}
	pass[ind] = '\0';

	if (sm != 2772)
	{
		dif_half1 = (sm - 2772) / 2;
		dif_half2 = (sm - 2772) / 2;

		if ((sm -2772) % 2 !=0)
			dif_half1++;
	for (ind = 0; pass[ind]; ind++)
	{
		if (pass[ind] >= (33 + dif_half1))
		{
			pass[ind] -= dif_half2;
			break;

		}
	}
	}
	printf("%s", pass);
	return (0);
}
		
