#ifndef dog_h
#define dog_h

#include <stdio.h>
/**
 * struct dog - dog data
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: struct to discrbe dog data
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
