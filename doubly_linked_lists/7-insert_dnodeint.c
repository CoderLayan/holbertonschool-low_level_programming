#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a list.
* @h: Pointer to the head of the doubly linked list.
* @idx: Index where the new node should be added (starting from 0).
* @n: Data to store in the new node.
*
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

if (idx == 0) /* Insert at the beginning */
return (add_dnodeint(h, n));

/* Traverse to the position before the insertion point */
while (temp && i < idx - 1)
{
temp = temp->next;
i++;
}

if (!temp) /* If the index is out of bounds */
return (NULL);

if (!temp->next) /* Insert at the end */
return (add_dnodeint_end(h, n));

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;

/* Update pointers to link the new node */
temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
