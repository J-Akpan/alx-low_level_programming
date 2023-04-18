#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - check for the length of thre string
 * @str: string parameter to check
 *
 * Return: Str
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - function to copy string pointer
 * @dest: buffer to store string copy
 * @src: sorce string
 *
 * Return: dest pointeer
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - create a dog strucure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bark;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bark = malloc(sizeof(dog_t));
	if (bark == NULL)
		return (NULL);

	bark->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bark->name == NULL)
	{
		free(bark);
		return (NULL);
	}

	bark->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bark->owner == NULL)
	{
		free(bark->name);
		free(bark);
		return (NULL);
	}

	bark->name = _strcopy(bark->name, name);
	bark->age = age;
	bark->owner = _strcopy(bark->owner, owner);

	return (bark);
}
