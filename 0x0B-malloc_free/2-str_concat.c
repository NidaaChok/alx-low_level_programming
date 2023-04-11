#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *strconcat;
	int len1 = 0, len2 = 0;
	int i, j;

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	strconcat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (strconcat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		strconcat[i] = s1[i];

	for (i = 0, j = len1; i < len2; i++, j++)
		strconcat[j] = s2[i];

	strconcat[j] = '\0';

	return (strconcat);
}
