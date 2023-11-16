#include "monty.h"

/**
 * nop - dont do anything
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void nop(stack_t **stack, unsigned int line_number)
{
	return;

	/* overcome unused attribute warning */
	stack = stack;
	line_number = line_number;
}
