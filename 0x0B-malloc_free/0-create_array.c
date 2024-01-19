#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars and initializes
 * it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(size);
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (size); i++)
			{
				s[i] = c;
			}
			return (s);
		}
	}
}
