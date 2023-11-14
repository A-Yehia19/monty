#include "monty.h"

/**
 * main -
 * @argc: number of arguments
 * @argv: arguments
 * Return: EXIT_SUCCESS on success.
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	int line_number = 0, tokens_len = 0;
	char *tokens[BUFSIZ] = {NULL};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		tokens[tokens_len] = strtok(line, " \n\t");
		while (tokens[tokens_len] != NULL)
		{
			tokens_len++;
			tokens[tokens_len] = strtok(NULL, " \n\t");
		}
		excute_command(tokens, tokens_len, line_number);
		tokens_len = 0;
	}
	free(*tokens);
	fclose(file);
	return (EXIT_SUCCESS);
}
