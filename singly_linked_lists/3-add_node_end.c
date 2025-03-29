#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

new_node = malloc(sizeof(list_t)); /* Allocate memory for the new node */
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str); /* Duplicate the string */
if (new_node->str == NULL) /* Check for strdup failure */
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str); /* Set the length of the string */
new_node->next = NULL;       /* This will be the last node, so next is NULL */

if (*head == NULL) /* If the list is empty, make new_node the head */
{
*head = new_node;
}
else /* Traverse to the end of the list and add the new node */
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}

return (new_node);
}
