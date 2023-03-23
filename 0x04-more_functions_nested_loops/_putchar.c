#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: the Character to print
 *
 * Return: On success 1
 *	On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (Write(1, &c, 1));
}
