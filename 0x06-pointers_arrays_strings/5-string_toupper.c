#include <stdio.h>
#include <string.h>
/**
 * cap_string -  capitalizes all words of a string.
 * @arr: array of string
 *
 * Return: the capitalized string
 */
char *cap_string(char *arr)
{
    int i,len;
    len = strlen(arr);
    for(i=0 ; i<len ; i++)
        if(arr[i] == '\n' || arr[i] == '\t' || arr[i] == ' ' || arr[i] == ',' || arr[i] == ';' || arr[i] == '.' || arr[i] == '!' || arr[i] == '?' || arr[i] == '\"' || arr[i] == '(' || arr[i] == ')' || arr[i] == '{' ||arr[i] == '}' )
        {
        if(arr[i+1] >= 'a' && arr[i+1] <= 'z')
            arr[i+1] = arr[i+1] - 32;
        }
    return (arr);
}
