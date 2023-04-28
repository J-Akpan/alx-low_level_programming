#include "lists.h"

/**
 * Description: *add_node_end - function to add node at the end of list
 *
 * @head: pointer to the list
 * @str: string for the newcode
 *
 * Return: address of mew element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newcode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		if (str[len] != 0)
			len++;

	newcode = malloc(sizeof(list_t));

	if (newcode == NULL)
		return (NULL);

	newcode->str = strdup(str);
	newcode->len = len;
	newcode->next = NULL;

	if (*head == NULL)
	{
		*head = newcode;
		return (newcode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newcode;


	return (newcode);
}