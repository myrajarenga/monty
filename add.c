#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @head: pointer to stack
 * @number: line number
 *
 * Return: void
 */
void add(stack_t **head, unsigned int number)
{
	int value;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", number);
		exit(EXIT_FAILURE);
	}

	value = 0;
	value += (*head)->n;
	pop(head, number);
	(*head)->n += value;
}
