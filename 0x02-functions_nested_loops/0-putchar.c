#include "main.h"

/**
 *main- Entry point
 *
 *Description: A program that  prints a word using the _putchar() prototyp
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');
	return (0);
}


