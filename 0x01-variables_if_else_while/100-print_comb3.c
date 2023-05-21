#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using main fuction
 * this program prints "possible combination of 2 digit
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d;
	int e;

	while (c <= 99)
	{
		d = (c / 10 + '0');
		e = (c % 10 + '0');
		if (d < e)
		{
			putchar(d);
			putchar(e);
			if (c != 89)
			{
				putchar(',');
				putchar(' ');
		}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
