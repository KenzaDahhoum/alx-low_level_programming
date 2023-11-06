#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  *new_dog -  function that creates a new dog
  *@name: dog's name
  *@age: dog's age
  *@owner: dog's owner
  *Return: Always 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(strlen(name) + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	strcpy(d->owner, owner);
	return (d);
}
