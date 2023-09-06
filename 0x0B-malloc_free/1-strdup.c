#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
* _strdup - copy array of charecters
* @str : input string
* Return: pointer to array
*/
char *_strdup(char *str)
{
int len,i;
char *str2;
len = i =0;
if (str == NULL)
return (NULL);
while(str[i] != '\0')
{
len += 1;
}
str2 = malloc(sizeof(char) * len);
if (str2 == NULL)
return (NULL);
for(i = 0 ; i < len ; i ++)
{
str2[i] =str [i]; 
}
return str2;
}