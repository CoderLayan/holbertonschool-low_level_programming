#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: Pointer to the head of the doubly linked list.
*
* Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h) /* Traverse the list */
{
printf("%d\n", h->n); /* Print the data in the current node */
count++; /* Increment the node counter */
h = h->next; /* Move to the next node */
}

return (count); /* Return the total number of nodes */
}
