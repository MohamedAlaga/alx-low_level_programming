#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - function allocates memory for an array.
 * @nmemb:number of elements .
 * @size: size of each element.
 *
 * Return:  pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size) {
  int i;
  int *ptr;
  if (nmemb == 0 || size == 0)
  return (NULL);
  ptr = malloc(nmemb * size);
  if (ptr == NULL)
  return (NULL);
  for (i = 0; i < (int)(nmemb * size); i++)
  ptr[i] = 0;
  return ptr;
}
