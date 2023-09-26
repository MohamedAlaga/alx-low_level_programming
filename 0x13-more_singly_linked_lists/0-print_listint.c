#include "lists.h"
/**
 * print_listint - singly linked list
 * @h: linked list
 *
 * Description: print singly linked list node structure
 * Return: lenght of list
 */
size_t print_listint(const listint_t *h)
{
if (h)
{
printf("%d\n", h->n);
if (h->next == NULL)
return (1);
else
return (1 + print_listint(h->next)); }
return (0);
}
