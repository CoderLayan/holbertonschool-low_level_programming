#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a list_t list.
* @head: Pointer to the head of the list.
*/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;            /* Store the current node in temp */
head = head->next;      /* Move to the next node */
free(temp->str);        /* Free the string in the current node */
free(temp);             /* Free the current node */
}
}
