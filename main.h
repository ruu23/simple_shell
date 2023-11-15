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


void display_prompt(void);
void handle_execute(char *command);
void handle_arguments(char *command);
void handle_path(char *command);
void handle_exit(void);
void handle_env(void);

#endif
