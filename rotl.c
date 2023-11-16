#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *last = *stack;
	stack_t *new_head = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (last->next != NULL)
	{
		last = last->next;
	}

	new_head = (*stack)->next;

	(*stack)->prev = last;
	(*stack)->next = NULL;

	last->next = *stack;
	new_head->prev = NULL;

	*stack = new_head;
}
