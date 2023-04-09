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
	if (argc == 1)
		printf("0\n");
	else
	{
		int i;
		int sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (**(argv + i) < '0' || **(argv + i) > '9')
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
