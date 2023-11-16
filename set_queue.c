#include "monty.h"

/**
 * set_queue - sets the format of the data to a queue (FIFO).
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void set_queue(stack_t **stack, unsigned int line_number)
{
	common.type = 1;
	return;

	/* overcome unused attribute warning */
	stack = stack;
	line_number = line_number;
}
