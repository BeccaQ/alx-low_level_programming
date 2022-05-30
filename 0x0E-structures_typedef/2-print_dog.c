#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - initialize a variable of type struct dog
 * @d: function pointer
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = atoi("(nil)");
	if (d->owner == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
