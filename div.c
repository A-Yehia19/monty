#include "monty.h"

/**
 * _div - divides the second top element of the stack by the top of the stack
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int ans;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		quit(stack, EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		quit(stack, EXIT_FAILURE);
	}

	ans = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = ans;
}
