#include "main.h"
/**
 *  * _memcpy - copies a memory area
 *   *
 *    * @dest: where memory is copied
 *     * @src: where memory is stored
 *      * @n: number of bytes
 *       *
 *        * Return: dest
 *         */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int k = n;

	for (i = 0; i < k; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
