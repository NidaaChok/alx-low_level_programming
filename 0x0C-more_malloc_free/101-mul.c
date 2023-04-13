#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;
	char *c;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c != '\0'; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				exit(98);
			}
		mul *= atoi(argv[i]);
	}

	printf("%d\n", mul);
	return (0);
}
