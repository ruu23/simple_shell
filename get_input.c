#include "main.h"
/**
 * get_input - input
 * @input: char
 */
void get_input(char *input)
{
	fgets(input, MAX_INPUT, stdin);
	input[strcspn(input, "\n")] = 0;
}
