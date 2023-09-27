#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer to the first node in the list
 *
 */
void free_listint2(listint_t **head)
{
listint_t *h = *head;
if (h == NULL)
return;
if (!h)
free(h);
else
free_listint2(&(h->next));
free(h);
*head = NULL;
}
