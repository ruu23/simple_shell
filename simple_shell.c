#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char command[100];

	while (1)
	{
		display_prompt();
		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			printf("\n");
			break;
		}
		command[strcspn(command, "\n")] = 0;
		if (strcmp(command, "exit") == 0)
		{
			handle_exit();
		}
		else if (strcmp(command, "env") == 0)
		{
			handle_env();
		}
		else
		{
			handle_arguments(command);
			handle_path(command);
		}
	}
	return (0);
}
