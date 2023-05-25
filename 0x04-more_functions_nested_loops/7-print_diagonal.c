#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int j, s;

	if (n > 0)
	{
		for (j = 0; j < i; j++)
		{
			for (s = 0; s < j; s++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (j == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

