#include "monty.h"

/**
 * sub - subtracts the top element from the second top element of the stack
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int ans;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't su, stack too short\n", line_number);
		quit(stack, EXIT_FAILURE);
	}

	ans = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = ans;
}
