#include "lists.h"
/**
 * add_nodeint - add node to the list
 * @head: pointer to list last element
 *
 * Description: return singly linked list node structure len
 * Return: lenght of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    if (head && n)
    {
        listint_t *h;
        h->n = n;
        h->next = *head;
        return (h);
    }
    return (NULL);
}