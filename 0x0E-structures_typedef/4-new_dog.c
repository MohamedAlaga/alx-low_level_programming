#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog obj.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner name.
 *
 * Return: dog new obj.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
