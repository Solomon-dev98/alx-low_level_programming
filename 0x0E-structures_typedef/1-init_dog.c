#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  function that iniitialize a variable of type struct dog
 * @d: a structure parameter.
 * @name:  a parameter.
 * @age: a parameter;
 * @owner: a parameter.
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
