#include "main.h"

/**
 * print_square - prints square by using #
 *
 * @size: size of square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int row, column;

	for (row = 0; row <= size; row++)
	{
		for (column = 0; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
