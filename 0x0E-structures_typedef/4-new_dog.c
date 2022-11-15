#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *my_dog;

	/*gestion d'erreur malloc*/
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	/*enregistrement du nouveau chien*/
	(*my_dog).name = name;
	(*my_dog).age = age;
	(*my_dog).owner = owner;
	/*suppression de l'espace alloué si on a pas owner ou name*/
	if ((*my_dog).owner == NULL || (*my_dog).name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	/*enregistrement d'une copie en mémoire*/
	for (i = 0; i < (int) sizeof(dog_t); i++)
	{
		*(name + i) = *name;
		*(owner + i) = *owner;
	}
	return (my_dog);
	free(my_dog);
}
