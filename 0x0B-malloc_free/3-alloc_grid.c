#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ii;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ii = malloc(sizeof(int *) * height);

	if (ii == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ii[x] = malloc(sizeof(int) * width);

		if (ii[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ii[x]);

			free(ii);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ii[x][y] = 0;
	}

	return (ii);
}

