#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
