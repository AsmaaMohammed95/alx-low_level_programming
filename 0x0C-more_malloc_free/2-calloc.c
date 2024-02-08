#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb:nuber of element
 * @size: number of bytes
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, (nmemb * size));
	return (p);
}
