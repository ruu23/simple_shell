#include "main.h"
/**
 * execute_command - execute
 * @command: char
 *
 */
void execute_command(char *command)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execlp(command, command, NULL);
		perror(command);
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
