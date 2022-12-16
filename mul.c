#include "monty.h"
/**
 * mul - multiplies the second top element of the stack
 * with the top element of stack
 * @head: pointer to stack
 * @number: line number
 * Return void
 */
void mul(stack_t **head, unsigned int number)
{
        int value;

        if (head == NULL || *head == NULL || (*head)->next == NULL)
        {
                fprintf(stderr, "L%d: can't mul, stack too short", number);
                exit(EXIT_FAILURE);
        }
        else
        {
                value = 0;
                value += (*head)->n;
                pop(head, number);
                (*head)->n * value;
        }
}

