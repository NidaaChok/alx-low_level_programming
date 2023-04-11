#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **two_d_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_d_array = malloc(sizeof(int *) * height);

	if (two_d_array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*two_d_array = malloc(sizeof(int) * width);

		if (*two_d_array == NULL)
		{
			for (; i >= 0; i--)
				free(*(two_d_array + i));

			free(two_d_array);
			return (NULL);
		}
	}

	i = 0;

	while (i < height)
	{
		for (j = 0; j < width; j++)
			two_d_array[i][j] = 0;
		i++;
	}

	return (two_d_array);
}
