#include "main.h"
/**
 * swap_int - swaps two integers, a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
