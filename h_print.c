#include "shell.h"
/**
 * h_print - basic printf funtion which displays on stdo
 * @myprint: recieved charater strings passed.
 *
 * Return: Always 0.
 */

void h_print(const char *myprint)
{
	write(STDOUT_FILENO, myprint, strlen(myprint));
}
