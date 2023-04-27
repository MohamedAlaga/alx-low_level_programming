#include<stdio.h>
#include<stdlib.h>
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
else
{
char *arr;
int i ;
arr = malloc (size * sizeof(char));
for (i = 0; i < size; i ++)
arr[i]=c;
return (*arr);
}
}