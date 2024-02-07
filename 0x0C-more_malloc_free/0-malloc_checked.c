#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: size of memory allocated.
 * Return: a pointer to memory allocater if sucsseed
 * or (98) if fail
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
