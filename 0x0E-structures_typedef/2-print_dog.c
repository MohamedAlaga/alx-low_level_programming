#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("(nil)");
}
else if (d->name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: &s",d->name);
printf("Age: &f",d->age);
printf("Owner: &s",d->owner);
}
}
