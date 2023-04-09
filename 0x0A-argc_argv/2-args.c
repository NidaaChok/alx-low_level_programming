#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: The number of arguments supplied to the program
 * @argv: an array of pointers to the given argument
 *
 * Return: Always 0 (SUccess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
