#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure type
 * @name: a string of character
 * @age: a flout variable
 * @owner: a stringe of character
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif/*DOG_H*/
