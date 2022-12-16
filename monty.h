#define _GNU_SOURCE
#ifndef __MONTY__
#define __MONTY__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define _POSIX_C_SOURCE 200809L
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void get_func(char *command, stack_t **head, unsigned int n);
void push(stack_t **head, unsigned int n);
void pall(stack_t **head, unsigned int n);
void pint(stack_t **head, unsigned int q);
void pop(stack_t **head, unsigned int n);
void swap(stack_t **head, unsigned int n);
void addqueue(stack_t **head, unsigned int n);
void add(stack_t **head, unsigned int number);
void nop(stack_t **head, unsigned int number);
void sub(stack_t **head, unsigned int number);
void f_queue(stack_t **head, unsigned int counter);
void freestack(stack_t *head);
#endif
