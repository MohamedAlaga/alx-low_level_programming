#include "dog.h"
/**
 * init_dog - creat a dog struct.
 * @d: dog struct.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog  owner name.
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
