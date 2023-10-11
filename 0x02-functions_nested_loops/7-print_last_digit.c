#include "main.h"
/**
 * print_last_digit - function that  prints last digit
 *
 * @k:the last digit
 *
 * Return:last digit
 */
int print_last_digit(int k)
{
	int last_digit;


	last_digit = k % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
