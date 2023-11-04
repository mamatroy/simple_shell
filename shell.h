#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void h_print(const char *myprint);
void prompt(void);
void execute(const char *commands);
void input(char *commands, size_t size);


#endif
