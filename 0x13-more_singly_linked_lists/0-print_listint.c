#include "lists.h"
/**
 * print_listint - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
size_t print_listint(const listint_t *h) {
  printf("%d ",h->n);
  if(h->next == NULL)
  return (1);
  else
  return (1+print_listint(h->next));
}