#include "monty.h"
/**
 * pop - pops element from top of stack
 * @head: pointer to stack
 * @n: line number
 *
 * Return: void
 */
void pop(stack_t **head, unsigned int n)
{
	stack_t *temp;

	if (head == NULL || (*head) == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", n);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	(*head) = (*head)->next;
	free(temp);
}
