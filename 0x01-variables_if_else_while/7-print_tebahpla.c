#include	<stdio.h>

/**
 * main	-	prints	alphabet	at	reverse
 *
 * Return:	Always	0	(success)
 *
 */
int	main(void)
{
	char	c;

	for	(c	=	'z';	c	>=	'a';	c--)
	{
		putchar(c);
	}

	putchar('\n');

	return	(0);
}
