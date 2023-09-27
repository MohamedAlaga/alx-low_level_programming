#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer to the first node in the list
 *
 * Return:head node data or 0 if
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
int count;
for(count = 0; count != (int)index; count ++ )
{
temp = temp->next;
}
return (temp);
}
