#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
* @h: Pointer to the head of the linked list.
*
* Return: The number of elements in the list.
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL) /* Traverse the list */
{
count++;      /* Increment the count for each node */
h = h->next;  /* Move to the next node */
}

return (count); /* Return the total count */
}
