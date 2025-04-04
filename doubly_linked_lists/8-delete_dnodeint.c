#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given index in a doubly
*                            linked list.
* @head: Pointer to the pointer of the head of the list.
* @index: Index of the node to be deleted (starting from 0).
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(
dlistint_t **head,
unsigned int index
)
{
dlistint_t *temp = *head;
unsigned int count = 0;

if (!head || !*head) /* Check if the list exists */
return (-1);

/* If deleting the head node */
if (index == 0)
{
*head = temp->next; /* Move head to the next node */
if (*head) /* Update the new head's prev pointer */
(*head)->prev = NULL;
free(temp); /* Free the old head node */
return (1);
}

/* Traverse to the node at the given index */
while (temp && count < index)
{
temp = temp->next;
count++;
}

if (!temp) /* If the index is out of bounds */
return (-1);

/* Update links to bypass the node to be deleted */
if (temp->next) /* If not the last node */
temp->next->prev = temp->prev;

if (temp->prev) /* If not the first node */
temp->prev->next = temp->next;

free(temp); /* Free the node */
return (1);
}
