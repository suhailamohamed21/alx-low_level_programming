#include "main.h"

/**
 * rev_string -  reverses a string
 *
 * @s: string input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (1 = 0; s[l] != '\0'; ++l)
		;
	i++;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
