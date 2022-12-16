#include "monty.h"

/**
 * pint - prints top value of stack
 * @head: pointer to stack
 * @q: line number
 * Return: void
 */
void pint(stack_t **head, unsigned int q)
{
	if (head == NULL || (*head) == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", q);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*head)->n);
	}
}
