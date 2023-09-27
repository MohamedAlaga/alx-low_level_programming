#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer to the first node in the list
 *
 * Return:head node data or 0 if 
 */
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
if(*head){
int num;
*head = temp->next;
num = temp->n;
free(temp);
return(num);
}
return (0);
}