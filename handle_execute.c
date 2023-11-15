#include "main.h"
/**
 * handle_execute - execute
 * @command: char
 *
 */
void handle_execute(char *command)
{
	char *token;
	char *args[100];
	int i;
	pid_t pid;
	int status;

	i = 0;
	token = strtok(command, " ");
	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(args[0], args, NULL);
		perror(args[0]);
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
