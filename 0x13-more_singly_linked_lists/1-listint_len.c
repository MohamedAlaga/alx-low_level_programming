#include "lists.h"
/**
 * listint_len - singly linked list
 * @h: linked list fist element pointer
 *
 * Description: return singly linked list node structure len
 * Return: lenght of list
 */
size_t listint_len(const listint_t *h)
{
if (h)
{
if (h->next == NULL)
return (1);
else
return (1 + listint_len(h->next)); }
return (0);
}
