#include "lists.h"
/**
 * sum_listint - get sum of list element values
 * @head: pointer to the first node in the list
 *
 * Return:sum of list element values
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
