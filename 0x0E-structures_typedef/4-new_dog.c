#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	d->age = age;

	if (d->name == NULL || d->owner == NULL)
	{
		if (d->name == NULL)
			free(d->name);
		if (d->owner == NULL)
			free(d->owner);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	return (d);
}
