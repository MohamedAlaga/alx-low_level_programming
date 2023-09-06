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
char* str2;
len = 0;
for(i = 0; str[i] != '\0'; i++)
len++;
str2 = malloc(sizeof(char) * len);
for (i = 0; i < len; i++)
{
str2[i] = str[i];
}
return (str2);
}