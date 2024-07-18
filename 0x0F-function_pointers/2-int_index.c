#include "function_pointers.h"
/**
 * int_index - use a func pointer with all elements of arr
 * @array: array to use with func
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: index of the first 1 ,on false -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0 && array != NULL && cmp != NULL)
for (i = 0; i < size; i++)
if (cmp(array[i]) == 1)
return (i);
return (-1);
}
