#include "monty.h"

/**
 * is_number - check if string is a number
 * @str: string
 * Return: 1 if true, 0 if false
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
