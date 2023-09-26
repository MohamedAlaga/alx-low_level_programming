#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to the first node in the list
 *
 */
void free_listint(listint_t *head)
{
  free(head);
}