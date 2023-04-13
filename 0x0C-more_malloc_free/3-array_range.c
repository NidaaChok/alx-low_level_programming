#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *mem;
	int i, len, num;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	num = min;

	mem = malloc(len * sizeof(int));

	if (mem == NULL)
		return (NULL);
	for (i = 0; num <= max; i++, num++)
		mem[i] = num;

	return (mem);
}
