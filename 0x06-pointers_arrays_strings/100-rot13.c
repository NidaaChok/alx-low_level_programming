#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @s: given string to encode
 * Return: a pointer to teh encoded string
 */

char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		s++;
	}

	return (ptr);
}
