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
	int num;

	if (common.tokens[1] == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(common.tokens[1]);
	if (num == 0 && strcmp(common.tokens[1], "0") != 0)
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

	new_node->n = num;
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
