#include "lists.h"
/**
 * get_nodeint_at_index - get element of index n
 * @head: pointer to the first node in the list
 * @index: index of the element
 *
 * Return:element of index n or null if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
int count;
for (count = 0; count != (int)index; count++)
{
temp = temp->next;
if (temp == NULL)
{
return (NULL);
}
}
return (temp);
}
