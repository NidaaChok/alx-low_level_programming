#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: first given string
 * @src: second given string
 * @n: number of characters to copy from src
 * Return: a pointer to the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
