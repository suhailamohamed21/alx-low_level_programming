#include "main.h"

/**
 * more_numbers - print 0-14 ten times
 *
 * Return: always 0 (success)
*/

void more_numbers(void)
{
	int n, row, c;

	for (row = 0; row <= 10; row++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;
			lf(c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
