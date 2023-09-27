#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer to the first node in the list
 *
 * Return:head node data or 0 if 
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head; 
int sum = 0;
  while(temp)
  {
    sum+=temp->n;
    temp = temp->next;
  }
return (sum); 
}
