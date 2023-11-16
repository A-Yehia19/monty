#include "monty.h"

/**
 * quit - quit the program
 * @stack: stack
 * @exit_code: exit code
 * Return: NONE
 */
void quit(stack_t **stack, int exit_code)
{
    free_stack(stack);
	free(common.tokens[0]);
	fclose(common.file);
    exit(exit_code);
}
