#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of string
 *
 * @s: string to evaluate
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	while (*s++)
		len++;
	return (len);
}

/**
 * _strcpy - copy string pointed to by src
 *
 * @dest: pointer to buffer where we copy the string
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return dest_start;
}

/**
 * new_dog - creates new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lng1 = _strlen(name), lng2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return NULL;
	dog->name = malloc(lng1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return NULL;
	}
	dog->owner = malloc(lng2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return NULL;
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return dog;
}
