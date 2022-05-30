#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initialize a variable of type struct dog
 * @name: function pointer
 * @age: float
 * @owner: string pointer
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if(!d)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
