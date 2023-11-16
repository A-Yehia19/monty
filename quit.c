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
	fclose(common.file);
	exit(exit_code);
}
