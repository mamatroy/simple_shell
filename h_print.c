#include "shell.h"

void h_print(const char *myprint)
{
	write(STDOUT_FILENO, myprint, strlen(myprint));
}
