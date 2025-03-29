#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

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
new_node->next = *head;      /* Point new node to the current head */
*head = new_node;            /* Update head to point to the new node */

return (new_node);
}
