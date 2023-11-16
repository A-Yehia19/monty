#include "monty.h"

/**
 * free_stack - free the stack
 * @stack: stack
 * Return: NONE
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = NULL;

	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}
