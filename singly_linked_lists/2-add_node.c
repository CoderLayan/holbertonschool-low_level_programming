#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - Custom function to calculate the length of a string.
* @str: The string whose length is to be calculated.
*
* Return: The length of the string, or 0 if the string is NULL.
*/
unsigned int _strlen(const char *str)
{
unsigned int len = 0;

if (str == NULL) /* Handle NULL string edge case */
return (0);

while (str[len] != '\0') /* Increment length until null terminator */
len++;

return (len);
}

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

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Duplicate the string and check for failure */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

/* Use _strlen to determine the length of the string */
new_node->len = _strlen(str);

/* Point the new node to the current head of the list */
new_node->next = *head;

/* Update the head to point to the new node */
*head = new_node;

return (new_node);
}
