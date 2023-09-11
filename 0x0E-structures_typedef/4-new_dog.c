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

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	d->age = age;

	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';

	return (d);
}
