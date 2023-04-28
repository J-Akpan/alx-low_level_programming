#include "lists.h"

/**
 * Description: free_list - functions that free a list
 *
 * @head: list parameter to free
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		if (head != NULL)
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
