#include"main.h"
#include<stdlib.h>
#include<stdio.h>
char *create_array(unsigned int size, char c)
{
char *str = malloc(sizeof(char) * size);
int i;
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < (int)size ; i++)
{
str[i] = c;
}
return (str);
}
