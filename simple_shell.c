#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char input[MAX_INPUT];
	char command[MAX_INPUT];
	char *arguments[MAX_ARGS];

	while (1)
	{
		display_prompt();
		get_input(input);
		scanf(input, "%s", command);
		handle_exit(command);
		if (strcmp(command, "env") == 0)
		{
			handle_env();
			continue;
		}
		handle_arguments(input, command, arguments);
		handle_path(command);
		handle_execute(command);
	}
	return (0);
}
