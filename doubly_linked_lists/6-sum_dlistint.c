#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data in a dlistint_t list.
* @head: Pointer to the head of the doubly linked list.
*
* Return: Sum of all the data (n), or 0 if the list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head) /* Traverse the list */
{
sum += head->n; /* Add the value of the current node to the sum */
head = head->next; /* Move to the next node */
}

return (sum); /* Return the total sum */
}
