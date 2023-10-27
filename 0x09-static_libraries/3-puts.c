#include "main.h"
/**
 *  * _puts - prints a string followed by a line to stdout
 *   *
 *    * @str: string
 *     *
 *      * Returns: string
 *       */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
