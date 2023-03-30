#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - check if n is in ascii table
 * @n: character to check
 * Return: 1 if it is ASCII printable, else 0
 */

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print the hxadecimal of a character
 * @b: character to print it in hexadecimal
 * @start: start int
 * @end: end int
 * Return: Nothing
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print the ascii code of a given character
 * @b: given character
 * @start: start int
 * @end: end int
 *Return: nothing
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - a function that prints a buffer.
 * @b: given character
 * @size: size of the buffer
 * Return: Nothing
 */


void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}



