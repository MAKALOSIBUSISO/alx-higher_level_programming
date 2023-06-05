#include "lists.h"

/**
 * @list: linked list to check
 * check_cycle - checks if a linked list have a cycle
 *
 * Return: 1 if the list has a cycle and 0 if it doesn't
 */

int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	current = list;
	check = current->next;

	while (current != NULL && check->next != NULL && check->next->next != NULL)
	{
		if (current == check)
			return (1);
		current = current->next;
		check = check->next->next;
	}
	return (0);
}
