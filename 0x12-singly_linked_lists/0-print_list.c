#include"lists.h"
#include<stdio.h>
#include<string.h>

/**
 * print_list - prints all the elements of a list
 * @h:linked list
 * Return: 0
 */
size_t print_list(const list_t *h)
{if(h->str == NULL)
{
printf("[0] (nil)");
return (0);
}
else
{
printf("%s",h->str);
}
return (1 + print_list(h->next));
}