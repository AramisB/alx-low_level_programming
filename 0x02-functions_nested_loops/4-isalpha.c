#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: checks for an alphabetic letter
 *
 * Return: 1 if a letter, 2 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
