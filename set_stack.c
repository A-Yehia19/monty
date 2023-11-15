#include "monty.h"

/**
 * set_stack - sets the format of the data to a stack (LIFO).
 * @stack: stack
 * @line_number: line number
 * Return: NONE
 */
void set_stack(stack_t **stack, unsigned int line_number)
{
    common.type = 0;
    return;
    
    /* overcome unused attribute warning */
    stack = stack;
    line_number = line_number;
}
