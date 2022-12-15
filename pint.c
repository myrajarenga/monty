#include "monty.h"
/**
 * pint - prints top value of stack
 * @head: pointer to stack
 * @n: line number
 * Return: void
 */
void pint(stack_t **head, unsigned int n)
{
	if (head == NULL || (*head) == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", n);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
