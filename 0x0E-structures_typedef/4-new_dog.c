#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	d->age = age;

	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';

	return (d);
}
