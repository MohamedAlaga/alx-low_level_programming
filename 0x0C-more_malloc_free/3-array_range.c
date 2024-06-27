#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: minimum number .
 * @max: maximum number .
 *
 * Return:  pointer to the allocated memory.
 */
int *array_range(int min, int max) {
  int i, *ptr;
  if (min > max)
    return (NULL);
  ptr = malloc(sizeof(int) * (max - min + 1));
  if (ptr == NULL)
    return (NULL);
  for (i = 0; i < max - min + 1; i++)
    ptr[i] = min + i;
  return ptr;
}
