#include "main.h"
/**
 * _islower - checks for lowercase letter
 * @c: character to check if it's lowercase
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
