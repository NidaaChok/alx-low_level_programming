#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: The numbers of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: If one of the number contains symbols that are not digits - 1
 *         Otherwise - 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		int i;
		char *c;

		for (i = 1; i < argc; i++)
		{
			for (c = argv[i]; *c != '\0'; c++)
			{
				if (*c  < '0' || *c > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
