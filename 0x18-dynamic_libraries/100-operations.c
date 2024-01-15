#include <stdlib.h>
/**
 * add - a function that adds numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of the two numbers
 *
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - a function that finds the difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - a function that returns the product of a and b
 * @a: first number
 * @b: second number
 *
 * Return: the product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - a function that divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the quotient
 */
int div_op(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * mod - return the remainder of two divided numbers
 * @a: first number
 * @b: second number
 *
 * Return: the remainder
 */
int mod (int a, int b)
{
	return (a % b);
}
