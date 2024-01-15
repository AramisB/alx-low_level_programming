#include "main.h"
/**
 *  * _strcat - appends source string to destination string
 *   *
 *    * @dest: destination string
 *     * @src: source string
 *      *
 *       * Return: dest
 *        */
char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
