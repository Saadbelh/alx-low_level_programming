#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new
 * @head: double pointer
 * @str: new string
 *
 * Return: the address or NUL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_h = malloc(sizeof(list_t));
	if (!new_h)
		return (NULL);

	new_h->str = strdup(str);
	new_h->len = len;
	new_h->next = (*head);
	(*head) = new_h;

	return (*head);
}
