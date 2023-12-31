#include "main.h"
/**
 *  * _strchr - locates a character in a string
 *   *
 *    * @s: string
 *     * @c: character to search for
 *      *
 *       * Return: pointer to the first occurrence of c in s
 *        */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
