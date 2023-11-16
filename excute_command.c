#include "monty.h"

/**
 * excute_command - excute the command
 * @line_number: line number
 * @stack: stack
 * Return: NONE
 */
void excute_command(int line_number, stack_t **stack)
{
	int i, ln;
	instruction_t opcodes[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add}, {"nop", nop}, {"sub", sub},
		{"div", _div}, {"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl},	{"rotr", rotr},
		{"queue", set_queue}, {"stack", set_stack}, {NULL, NULL}
	};

	if (common.tokens_len == 0)
		return;

	for (i = 0; opcodes[i].opcode; i++)
	{
		if (strcmp(common.tokens[0], opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number);
			return;
		}
	}

	ln = line_number;
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, common.tokens[0]);
	quit(stack, EXIT_FAILURE);
}
