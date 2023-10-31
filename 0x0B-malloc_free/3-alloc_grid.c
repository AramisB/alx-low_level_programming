#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-dimensional grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
int **mee;
int x, y;

if (width <= 0 || height <= 0)
	return (NULL);

mee = malloc(sizeof(int *) * height);

if (mee == NULL)
	return (NULL);
for (x = 0; x < height; x++)
{
	mee[x] = malloc(sizeof(int) * width);
	(mee[x] == NULL
	{
	for (; x >= 0; x--)
	free(mee[x]);
	free(mee);
	return (NULL);
	}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
	mee[x][y] = 0;
}
return (mee);
}
