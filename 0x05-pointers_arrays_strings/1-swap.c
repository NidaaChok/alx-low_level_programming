#include "main.h"

/**
 *swap_int - swap the value of two given integers
 *@a: The first integer to be swapped.
 *@b: The first integer to be swapped.
 *Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
