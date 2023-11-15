#include "main.h"
/**
 * handle_arguments - arguments
 * @command: char
 * @input: char
 * @arguments: char
 *
 */

void handle_arguments(char *input, char *command, char *arguments[])
{
	char *token;
	int arg_count = 0;

	token = strtok(input, " ");
	if (token == NULL)
	{
		fprintf(stderr, "Error: No command entered\n");
		return;
	}
	strcpy(command, token);
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		if (token != NULL)
		{
			arguments[arg_count++] = token;
			if (arg_count >= MAX_ARGS)
			{
				fprintf(stderr, "Error: Too many arguments\n");
				return;
			}
		}
	}
	arguments[arg_count] = NULL;
}
