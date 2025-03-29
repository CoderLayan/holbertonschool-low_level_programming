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
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

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

/* Set the length and next pointer */
new_node->len = _strlen(str);
new_node->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
}
else
{
/* Traverse the list to find the last node */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

/* Point the last node to the new node */
temp->next = new_node;
}

return (new_node);
}
