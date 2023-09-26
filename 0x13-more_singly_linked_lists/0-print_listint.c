#include "lists.h"

/**
 * print_listint - prints all the element
 * @h: linked list
 *
 * Return: number nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
