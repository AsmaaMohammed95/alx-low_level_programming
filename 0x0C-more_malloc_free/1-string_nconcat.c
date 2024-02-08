#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		j++;
	}
	str = malloc((i + j + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (j = 0; (j < n && s2[j] != '\0'); j++)
		{
			str[i] = s2[j];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
