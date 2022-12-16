#include "monty.h"

/**
 * mod - computes division of second top element of stack
 * @head: pointer to stack
 * @number: line number
 *
 * Return: void
 */
void mod(stack_t **head, unsigned int number)
{
	int value;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", number);
		exit(EXIT_FAILURE);
	}
	else
	{
		value = 0;
		value += (*head)->n;
		pop(head, number);
		(*head)->n % value;
	}
}

