#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return NULL;
	}
	else
	{
		s = malloc(size);
		for (i = 0; i < (size); i++)
		{
			s[i] = c;
		}
		if (s == NULL)
		{
			return NULL;
		}
		else
		{
			return (s);
		}
	}
}
