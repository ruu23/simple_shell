#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

#define MAX_INPUT        255
#define MAX_ARGS         10

extern char **environ;

void display_prompt(void);
void handle_execute(char *command);
void handle_arguments(char *input, char *command, char *arguments[]);
void handle_path(char *command);
void handle_exit(char *command);
void handle_env(void);
void get_input(char *input);

#endif
