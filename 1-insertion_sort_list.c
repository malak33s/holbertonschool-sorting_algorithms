#include "sort.h"

/**
 * insertion_sort_list - function that sort a doubly linked list of
 * intergers in ascending order using the insertion sort algorithm.
 * @list: a pointer of the head of a double list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = (*list)->next;

	while (head != NULL)
	{
		temp = head->next;
		prev = head->prev;
		while (prev != NULL && prev->n > head->n)
		{
			prev->next = head->next;
			if (head->next != NULL)
				head->next->prev = prev;
			head->next = prev;
			head->prev = prev->prev;
			prev->prev = head;
			if (head->prev != NULL)
				head->prev->next = head;
			else
				*list = head;
			prev = head->prev;
			print_list(*list);
		}

		head = temp;
	}
}
