#include "main.h"
/**
 * _memset - fills memory with a costant byte
 * @s: starting address of the memory to be filled
 * @b: desired value
 * @n: number of bytes to be changes
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
