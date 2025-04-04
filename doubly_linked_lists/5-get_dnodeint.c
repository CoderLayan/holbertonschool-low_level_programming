#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list.
* @head: Pointer to the head of the list.
* @index: The index of the node, starting from 0.
*
* Return: Pointer to the nth node, or NULL if it does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head) /* Traverse the list */
{
if (count == index) /* If index matches the current count */
return (head);
count++; /* Increment the count */
head = head->next; /* Move to the next node */
}

return (NULL); /* Return NULL if the index is out of bounds */
}
