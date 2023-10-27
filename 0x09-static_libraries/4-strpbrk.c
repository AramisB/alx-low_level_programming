#include "main.h"
/**
 *  * _strpbrk - search for the ccurrence of any character from a specified set
 *   *
 *    * @s: string
 *     * @accept: string with specified characters
 *      *
 *       * Return: Null
 *        */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

