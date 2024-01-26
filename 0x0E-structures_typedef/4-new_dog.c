#include "dog.h"
#include <stddef.h>

/**
 * new_dog - function that creates a new dog
 * @name : dog name
 * @age: dog age
 * @owner: dog owner
 * Return: a pionter on successed else NULL
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *dog;

	dog = &new_dog;
	if (dog != NULL)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
		return (dog);
	}
	else
	{
		return (NULL);
	}
}
