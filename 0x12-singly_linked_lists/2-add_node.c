#include "lists.h"

/**
 * Description: *add_node - functiokn to add new node
 *
 * @head: node begining pointer
 * @str: string pointer
 *
 * Return: null if fails, addres to new element if success
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len  = 0;
	list_t *new_node;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
