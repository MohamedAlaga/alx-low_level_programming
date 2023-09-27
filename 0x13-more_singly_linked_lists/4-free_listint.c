#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the first node in the list
 *
 */
void free_listint(listint_t *head)
{
if (!head)
free(head);
else
{
free_listint(head->next);
free(head);
}
}