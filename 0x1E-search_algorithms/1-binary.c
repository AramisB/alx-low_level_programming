#include <stdio.h>

/**
 * binary_search -a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t mid, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
