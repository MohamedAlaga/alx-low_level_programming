#include "search_algos.h"
/**
 * binary_search - performe a binary search on array
 * @array: array to search inside
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: -1 if not found or the index of the first appear of value
 */
int binary_search(int *array, size_t size, int value)
{
size_t low = 0, heigh = size - 1, mid = (low + heigh) / 2, y;
if (array == NULL)
return (-1);
while (low <= heigh)
{
printf("Searching in array:");
for (y = low; y <= heigh; y++)
{
printf(" %d", array[y]);
if (y != heigh)
printf(",");
}
printf("\n");
if (array[mid] > value)
{
heigh = mid - 1;
mid = (low + heigh) / 2;
}
else if (array[mid] < value)
{
low = mid + 1;
mid = (low + heigh) / 2;
}
else if (array[mid] == value)
return (mid);
}
return (-1);
}

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
