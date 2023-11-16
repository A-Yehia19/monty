#include "monty.h"

/**
 * push - push integer to stack
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (common.tokens[1] == NULL || is_number(common.tokens[1]) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(common.tokens[1]);
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
	common.stack_len++;
}
