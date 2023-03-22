#include "main.h"

/**
 * _abs - function that computes the absolute value of an integar
 *
 * @n: takes integar type input for function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
