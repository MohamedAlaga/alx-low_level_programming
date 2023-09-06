#include"main.h"
#include<stdlib.h>
#include<stdio.h>
char *create_array(unsigned int size, char c)
{
if (size == 0){return NULL;}
char *str = malloc(sizeof(char)*size);
for(int i = 0; i<size ; i++)
{
  str[i]=c;
}
return str;
}