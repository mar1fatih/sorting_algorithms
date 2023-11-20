#include "sort.h"
/**
 * swap - swaping two nodes
 * @node1: first node
 * @node2: second node
*/
void swap(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - sorting list using insertion method
 * @list: list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !(*list) || !((*list)->next))
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;
		while (temp && temp->prev)
		{
			if (temp->prev->n > temp->n)
			{
				swap(temp->prev, temp);
				if (!(temp->prev))
					*list = temp;
				print_list(*list);
			}
			else
				temp = temp->prev;
		}
	}
}
