#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the first node in the list
 *
 */
void free_listint2(listint_t **head)
{
free_listint(*head);
*head = NULL;
}
