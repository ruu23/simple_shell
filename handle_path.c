#include "main.h"
/**
 * handle_path - path
 * @command: char
 *
 */
void handle_path(char *command)
{
	char *path_env = getenv("PATH");
	char *path = strdup(path_env);
	char *token;
	char *full_path;

	if (path == NULL)
	{
		perror("strdup");
		exit(EXIT_FAILURE);
	}
	token = strtok(path, ":");
	while (token != NULL)
	{
		full_path = malloc(strlen(token) + strlen(command) + 2);
		if (full_path == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		sprintf(full_path, "%s/%s", token, command);
		if (access(full_path, X_OK) == 0) 
		{
			strcpy(command, full_path);
			free(full_path);
			free(path);
			return;
		}
		free(full_path);
		token = strtok(NULL, ":");
	}
	fprintf(stderr, "Error: Command not found in PATH\n");
	free(path);
	exit(EXIT_FAILURE);
}

