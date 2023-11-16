#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



/**
 * struct shared_s - shared data acroos all files
 * @type: type of data structure 0: stack, 1: queue
 * @tokens: tokens
 * @tokens_len: length of tokens
 * @stack_len: length of stack
 * @file: file
 * Description: shared data acroos all files
 */
typedef struct shared_s
{
	int type;
	char *tokens[BUFSIZ];
	unsigned int tokens_len;
	unsigned int stack_len;
	FILE *file;
} shared;

shared common;



int excute_command(int line_number, stack_t **stack);
int free_stack(stack_t **stack);
void set_queue(stack_t **stack, unsigned int line_number);
void set_stack(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

int is_number(char *str);
void quit(stack_t **stack, int exit_code);

#endif
