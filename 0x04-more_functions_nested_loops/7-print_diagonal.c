#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 *
 * @n: number of times
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int k, l;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			for (l = 0; l < k; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
