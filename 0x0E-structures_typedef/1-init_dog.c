#include<stdio.h>
#include "main.h"
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: dog struct
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	id (d !== NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}