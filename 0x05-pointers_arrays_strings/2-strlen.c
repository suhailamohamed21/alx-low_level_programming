#include "main.h"

/**
 * _strlen - returns a length of a string
 *
 * @s: input string
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}
