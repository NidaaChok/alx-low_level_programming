#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: first string to contatenate
 * @src: second string to concatenate
 * Return: the dest concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
