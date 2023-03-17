#include <stdio.h>

/**
 *main - prints all possible combinations of two digits using putchar
 *Description: using main function
 *Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
