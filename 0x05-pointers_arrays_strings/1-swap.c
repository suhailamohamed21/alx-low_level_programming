#include "main.h"

/**
 * swap_int - swaps two integar values
 *
 * @a: input
 * @b: input
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
