#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: function pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	if (!d)
		d = malloc(sizeof(struct dog));	

	d->name = name;
	d->age = age;
	d->owner = owner;
}
