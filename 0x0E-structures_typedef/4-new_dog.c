#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *s1, char *s2);
/**
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	char *new_name;
	char *new_owner;

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);

	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dog2);
		return (NULL);
	}

	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(dog2);
		free(new_name);
		return (NULL);
	}

	dog2->name = _strcpy(name, new_name);
	dog2->age = age;
	dog2->owner = _strcpy(owner, new_owner);

	return (dog2);
}
/**
 * _strlen - function that returns the lenght of a string
 * @s: pointer string
 * Return: lenght
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; len[s] != '\0'; len++)
	;

	return (len);
}
/**
 * _strcpy - function that copies one string to another
 * @s1: first string
 * @s2: second string
 * Return: new string
 */
char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
