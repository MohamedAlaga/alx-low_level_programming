#include "dog.h"
/**
 * print_dog - print a struct.
 * @d: struct to print.
 *
 */

void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
printf(d->age <= 0 ? "Age: (nil)\n" : "Age: %f\n", d->age);
printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
