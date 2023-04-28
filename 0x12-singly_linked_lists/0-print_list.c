#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
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