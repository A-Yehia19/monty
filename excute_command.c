#include "monty.h"

/**
 * excute_command - excute the command
 * @line_number: line number
 * @stack: stack
 * Return: EXIT_SUCCESS on success.
 */
int excute_command(int line_number, stack_t **stack)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"queue", set_queue},
		{"stack", set_stack},
		{NULL, NULL}
	};

	if (common.tokens_len == 0 || common.tokens[0][0] == '#')
		return (EXIT_FAILURE);
	else
	{
		i = 0;
		while (opcodes[i].opcode)
		{
			if (strcmp(common.tokens[0], opcodes[i].opcode) == 0)
			{
				opcodes[i].f(stack, line_number);
				return (EXIT_SUCCESS);
			}
			i++;
		}

		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, common.tokens[0]);
		exit (EXIT_FAILURE);
	}
}
