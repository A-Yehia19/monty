#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *last = *stack;
	stack_t *new_last = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (last->next != NULL)
	{
		last = last->next;
	}

	new_last = last->prev;

	new_last->next = NULL;

	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;

	*stack = last;
}
