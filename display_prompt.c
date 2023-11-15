#include "main.h"
/**
 * display_prompt - display
 */

void display_prompt(void)
{
	char input[MAX_INPUT];
	int status;
	pid_t pid;

	while (1)
	{
		printf("#cisfun$ ");
		if (fgets(input, MAX_INPUT, stdin) == NULL)
		{
			printf("\n");
			break;
		}
		input[strcspn(input, "\n")] = 0;
		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			execlp(input, input, NULL);
			perror(input);
			exit(EXIT_FAILURE);
		}
		else
		{
			waitpid(pid, &status, 0);
		}
	}
}
