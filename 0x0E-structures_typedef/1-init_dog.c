#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *@*d : dog struct
 *@*name : dog anme
 *@age : dog age
 *@owner : owner name
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
 d = malloc(sizeof(struct dog));
 if (d == NULL)
{
}
else 
{
d->name = name;
d->age = age;
d->owner = owner;
}
}