#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *runner;

	current = head;
	runner = head;

	while (current != NULL && runner != NULL && runner->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;
		runner = runner->next->next;

		if (current == runner)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			count++;
			exit(98);
		}
	}

	return (count);
}
