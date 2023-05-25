#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if ((j == 50) || (j == 52))
		{
			continue;
		}
		putchar(j);
	}
	putchar(10);
}
