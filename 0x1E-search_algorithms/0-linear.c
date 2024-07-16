#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%zu] = [%d]", i, array[i]);
if (array[i] == value)
{
printf("Found %d at index: [%zu]\n", value, i);
return (i);
}
}
return (-1);
}
