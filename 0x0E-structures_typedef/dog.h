#ifndef dog_h
#define dog_h
/**
 * struct dog - Define a new type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
