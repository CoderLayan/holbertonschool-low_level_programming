#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Pointer to the pointer of the head node.
* @n: The value to store in the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;

if (*head == NULL) /* If the list is empty, new node becomes the head */
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Traverse to the last node */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

/* Add the new node at the end */
temp->next = new_node;
new_node->prev = temp;

return (new_node);
}
