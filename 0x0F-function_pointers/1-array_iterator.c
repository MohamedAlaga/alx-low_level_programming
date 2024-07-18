#include "function_pointers.h"
/**
 * array_iterator - use a func pointer with all elements of arr
 * @array: array to use with func
 * @size: size of the array
 * @action: function pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
if (action != NULL && array != NULL)
action(array[i]);
}
}
