#include "main.h"
/**
 * handle_env - env
 */
void handle_env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}
}
