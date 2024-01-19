#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string parameter to be copied.
 * Return: a pointer to a newly allocated space in memory.
 *
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = malloc((strlen(str) + 1) * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			strcpy(s, str);
			return (s);
		}
	}
}
