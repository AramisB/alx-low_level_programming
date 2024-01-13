#include "lists.h"
/**
 * is_palindrome - checks if a number is a palindrome
 *
 * @number: number to be checked
 *
 * Return: the number if palindrome
 */
bool is_palindrome(int number)
{
	int original = number;
	int reversed = 0;

	while (number != 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}
	return(original == reversed);
}
