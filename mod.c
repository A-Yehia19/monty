#include "monty.h"

/**
 * mod - calculate mod of the second element by the top element of the stack
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int ans;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		quit(stack, EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		quit(stack, EXIT_FAILURE);
	}

	ans = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = ans;
}
