#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with decimal value of binary number, or 0 if error.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_num;

	decimal_num = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		decimal_num <<= 1;

		if (b[index] == '1')
			decimal_num += 1;
	}

	return (decimal_num);
}
