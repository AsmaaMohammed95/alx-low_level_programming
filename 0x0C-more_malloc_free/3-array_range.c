#include "main.h"
#include <stdlib.h>
/**
 * array_range -  a function that creates an array of integers.
 * @min: first int.
 * @max: last int.
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int n;
	int i;
	int *ptr;

	n = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(n * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
