#include "search_algos.h"
/**
 * interpolation_search - performe a jump search on array
 * @array: array to search inside
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: -1 if not found or the index of the first appear of value
 */
int interpolation_search(int *array, size_t size, int value)
{
int *temp = array;
static size_t posStat = 0;
size_t low = 0, heigh = size - 1,
pos = (low + (value - temp[low]) * (heigh - low) /
                          (temp[heigh] - temp[low]));
posStat += pos;
if (array == NULL || size == 0)
return (-1);
if (pos > size || pos < 0)
{
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
printf("Value checked array[%lu] = [%d]\n", posStat, temp[posStat]);
if (value < temp[pos])
{
return (pos - interpolation_search(temp, (size - pos), value));
}
else if (value > temp[pos])
{
return (pos + interpolation_search(temp + pos, (size - pos), value));
}
else if (value == temp[pos])
return (pos);
return (-1);
}
