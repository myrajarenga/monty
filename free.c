#include "monty.h"
/**
 * freestack - frees stack
 * @head: pointer to stack
 * Return: void
 */
void freestack(stack_t *head)
{
	stack_t *temp;

	if (head  == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

