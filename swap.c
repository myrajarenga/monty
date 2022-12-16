#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @head: pointer to stack
 * @n: line number
 *
 * Return: void
 */
void swap(stack_t **head, unsigned int n)
{
	stack_t *temp;
	int i;

	if (head == NULL || (*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*head);
		i = temp->n;
		temp->n = temp->next->n;
		temp->next->n = i;
	}
}
