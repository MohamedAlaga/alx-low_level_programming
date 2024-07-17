#include "search_algos.h"
/**
 * exponential_search - performe a exponential search on array
 * @array: array to search inside
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: -1 if not found or the index of the first appear of value
 */
int exponential_search(int *array, size_t size, int value)
{
size_t i = 1;
int bSearch;
if (array == NULL)
return (-1);
while (1)
{
if (i > (size - 1))
{
printf("Value found between indexes [%lu] and [%lu]\n", i / 2, size - 1);
bSearch = binary_search(array + (i / 2), size - (i / 2), value);
if (bSearch == -1)
return (-1);
return ((i / 2) + bSearch);
}
else if (array[i] >= value)
{
printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i);
bSearch = binary_search(array + (i / 2), (i / 2) + 1, value);
if (bSearch == -1)
return (-1);
return ((i / 2) + bSearch);
}
else
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
i *= 2;
}
}
}
