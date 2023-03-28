#include "main.h"

/**
 * swap_int - swaps two values of integars
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
