#include "lists.h"

/**
* dlistint_len - Returns the number of elements in a doubly linked list.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h) /* Traverse the list */
{
count++; /* Increment the counter for each node */
h = h->next; /* Move to the next node */
}

return (count); /* Return the total count */
}
