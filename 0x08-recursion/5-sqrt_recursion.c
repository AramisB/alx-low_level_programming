#include "main.h"
/**
 * calculate_sqrt - Helper function to calculate the square root recursively
 *
 * @n: Number for which to find the square root
 * @i: Iterator to check potential square roots
 *
 * Return: The square root of n or -1 if not found
 */
int calculate_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (calculate_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number
 *
 * Return: the square root of n or -1 if n has no natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (calculate_sqrt(n, 1));
}
