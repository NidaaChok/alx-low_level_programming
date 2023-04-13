#include "main.h"
#include <stdlib.h>

/**
 * str_len - a function that's returns the length of a string
 * @str: the given string
 *
 * Return: the length of the string
 */

int str_len(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i]; i++)
		len++;
	return (len);
}

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int len1, len2, len;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = str_len(s1);
	len2 = str_len(s2);

	if (n >= len2)
		n = len2;
	len = len1 + n + 1;
	str_concat = malloc(len * sizeof(char));
	if (str_concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str_concat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str_concat[i] = s2[j];
	str_concat[i] = '\0';
	return (str_concat);
}
