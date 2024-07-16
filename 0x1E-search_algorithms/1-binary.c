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
size_t low = 0, heigh = size - 1, mid = (low + heigh) / 2;
int i, y;
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
