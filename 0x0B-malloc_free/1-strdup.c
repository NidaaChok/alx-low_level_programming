#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *strduplicate;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}

	strduplicate = malloc(sizeof(char) * (len + 1));

	if (strduplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		strduplicate[i] = str[i];
	strduplicate[len] = '\0';

	return (strduplicate);
}
