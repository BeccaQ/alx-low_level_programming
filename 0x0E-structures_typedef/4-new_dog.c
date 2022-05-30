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
	int len, i, j;

	d = malloc(sizeof(dog_t));
	if(!d | !name | !owner)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; name[i];)
		i++;
	for (j = 0; owner[j];)
		j++;

	d->name = malloc(sizeof(i + 1));
	d->owner = malloc(sizeof(j +1));

	if (!(d->name) | !(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (len = 0; len < i; len++)
		d->name[len] = name[len];
	d->name[i] = '\0';

	if (!(d->owner) | !(d->name))
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	for (len = 0; len < j; len++)
		d->owner[len] = name[len];
	d->owner[j] = '\0';

	d->age = age;

	return (d);
}
