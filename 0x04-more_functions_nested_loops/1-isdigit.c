#include "main.h"

/**
 *_isdigit - check if given int is digit
 *@c: the number to be checked
 *Return: 1 if number is digit else returns 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
