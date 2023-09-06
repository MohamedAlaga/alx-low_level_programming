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
char* str2;
str2 = str;
return str2;
}
int main()
{
printf("%s",_strdup("hello"));
}