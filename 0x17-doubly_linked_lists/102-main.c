#include "lists.h"
/**
 * main - checks code
 *
 * Return: 0 on success
 */
int main()
{
	int largest_palindrome = 0, i, j, product;
	
	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}
	printf("Largest palindrome: %d\n", largest_palindrome);
	return(0);
}
