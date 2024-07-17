#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: the doubly linked list to sort by insertion sorting
 * Return: : void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *(list);
	listint_t *first_node = NULL;
	listint_t *second_node = NULL;

	if (list == NULL || *list == NULL)
		return;
	if (!temp->next)
	{
		return;
	}
	temp = temp->next;
	while (temp != NULL)
	{
		first_node = temp->prev;
		second_node = temp;
		while (first_node && second_node && first_node->n > second_node->n)
		{
			if (first_node->prev != NULL)
			{
				first_node->prev->next = second_node;
			}
			second_node->prev = first_node->prev;
			first_node->next = second_node->next;
			if (second_node->next != NULL)
			{
				first_node->next->prev = first_node;
			}
			first_node->prev = second_node;
			second_node->next = first_node;
			if (!second_node->prev)
			{
				*list = second_node;
			}
			first_node = second_node->prev;
			print_list(*(list));
		}
		temp = temp->next;
	}
}
