#include "monty.h"

/**
 * is_number - check if string is a number
 * @str: string
 * Return: 0 if true, 1 if false
 */
int is_number(char *str)
{
	int num;

	num = atoi(str);
	if (num == 0 && strcmp(str, "0") != 0)
		return (0);
	else
		return (1);
}
