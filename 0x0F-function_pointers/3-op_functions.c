#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns a + b
 * @a: integer
 * @b: integer
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: integer
 * @b: integer
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns a * b
 * @a: integer
 * @b: integer
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns a / b
 * @a: integer
 * @b: integer
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a / b
 * @a: integer
 * @b: integer
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
