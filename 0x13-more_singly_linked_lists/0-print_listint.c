#include "lists.h"
/**
 * print_listint - print all element of a linked list
 * @h: singly linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num_node = 0;

	while (h ! = NULL)
	{
		num_node++;
		print("%d\n", h->n);

	}
	return (num_node);
}
