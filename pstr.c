#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void pstr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		if (isascii(temp->n) == 0 || temp->n == 0)
			break;

		printf("%c", temp->n);
		temp = temp->next;
	}

	printf("\n");
}
