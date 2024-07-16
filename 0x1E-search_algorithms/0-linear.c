#include "search_algos.h"
/**
 * linear_search - performe a linear search on array
 * @array: array to search inside
 * @size: size of the array
 * @value: value to search for in the array
 * 
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
