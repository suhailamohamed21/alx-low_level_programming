#include "main.h"

/**
 * print_most_numbers - print numbers 0-9 except 2&4
 *
 * Return: Always 0 (success)
*/

void print_most_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
