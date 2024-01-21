#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return : (str) on successed and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0;
	int j = 0;
	int a, b;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
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
		for (a = 0; s1[a] != '\0'; a++)
		{
			str[a] = s1[a];
		}
		for (b = 0; s2[b] != '\0'; b++)
		{
			str[a] = s2[b];
			a++;
		}
		str[a] = '\0';
	}
	return (str);
}
