#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog -  a function that prints a struct dog
 * @d: pointer to structure
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
