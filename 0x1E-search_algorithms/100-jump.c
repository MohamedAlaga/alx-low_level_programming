#include "search_algos.h"
#include <math.h>
/**
 * jump_search - performe a jump search on array
 * @array: array to search inside
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: -1 if not found or the index of the first appear of value
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump = sqrt(size), low = 0, heigh = jump;
int i;
if (array == NULL || size ==0)
return (-1);
printf("Value checked array[%lu] = [%d]\n", low, array[low]);
while (heigh < size)
{
if (array[heigh] >= value)
{
printf("Value found between indexes [%lu] and [%lu]\n", low, heigh);
for (i = 0; low + i <= heigh; i++)
{
printf("Value checked array[%lu] = [%d]\n", low + i, array[low + i]);
if (array[low + i] == value)
return (low + i);
}
return (-1);
}
printf("Value checked array[%lu] = [%d]\n", heigh, array[heigh]);
if (array[heigh] < value)
{
low = heigh;
if (heigh == size)
break;
else if (heigh + jump <= size)
heigh += jump;
else
heigh = size;
}
}
return (-1);
}
