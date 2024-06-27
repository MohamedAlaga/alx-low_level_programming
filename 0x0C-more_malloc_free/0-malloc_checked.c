#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b:size to be allocated .
 *
 * Return:  pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
else
{
return (ptr);
}
}
