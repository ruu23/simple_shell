#include "main.h"
/**
 * handle_exit - exit
 * @command: char
 *
 */
void handle_exit(char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		printf("Exiting the shell\n");
		exit(EXIT_SUCCESS);
	}
}
