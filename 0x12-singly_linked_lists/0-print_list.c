#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the number of elements in the linkedlist
 * @h: node param
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);

}
