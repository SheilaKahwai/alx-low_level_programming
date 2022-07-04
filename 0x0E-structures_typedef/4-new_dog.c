#include<stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog's information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *n_dog;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		n_dog->name[i] = name[i];
	}
	n_dog->name[i] = '\0';

	for (i = 0; i < len2; i++)
	{
		n_dog->owner[i] = owner[i];
	}
	n_dog->owner[i] = '\0';

	n_dog->age = age;

	return (n_dog);
}
