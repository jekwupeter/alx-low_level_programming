#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the lenght of a string
 * @str: The string to be measured
 * Return: returns lenght of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != 0)
		len++;

	return (len);
}

/**
 * *_strcopy - Copies a string pointed to by src, including the terminating
 * 		null byte, to a buffer pointed by dest.
 * @dest: The buffer used to store copy
 * @src: The string to be copied
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != 0; index++)
		dest[index] = src[index];
	dest[index] = 0;

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of new dog
 * Return: The new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return(NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
