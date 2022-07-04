#include<stdlib.h>
#include "dog.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	unsigned int i;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - copies a string src to dest
 * @dest: pointer to buffer where the string is to be copied
 * @src: string to copy
 * Return: resulting string
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int i, len;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog's information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len1, len2;
	char *n_dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);

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

	_strcpy(n_dog->name, name);
	_strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
