#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strdup - creates an array of chars
 * @str: array of chars
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
{
if (s2 == NULL)
{
return (NULL);
}
else
{
return (s2);
}
}
else if (s2 == NULL)
{
return (s1);
}
else
{
char *concat = NULL;
int len1,len2;
len1 = strlen(s1);
len2 = strlen(s2);
concat = malloc((len1+len2)*sizeof(char));
if (concat == NULL)
{
return (NULL);
}
else
{
int i;
for(i = 0; i<(len1+len2);i++)
{
if(i < len1)
{
concat[i] = s1[i];
}
else
{
concat[i] = s2[i-len1]; 
}
return (concat);
}
}
}
return(0);
}