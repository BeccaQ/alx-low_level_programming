#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - holds name, age and owner var
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: nothing
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_tag;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
