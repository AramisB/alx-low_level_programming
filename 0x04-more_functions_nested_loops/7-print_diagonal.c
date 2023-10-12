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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, l;

		for (k = 1; k < n; k++)
		{
			for (l = 0; l < k; l++)
			{
				if (l == k-1)
				{
					_putchar('\\');
				}
				else if (l < k)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
