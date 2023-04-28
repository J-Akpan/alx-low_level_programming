#include "lists.h"

/**
 * Description: list_len - function to number of lints element
 *
 * @h: pointer to the list
 *
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str != NULL)
			i++;
		h = h->next;
	}

	return (i);
}
