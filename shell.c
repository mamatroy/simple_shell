#include "shell.h"
/**
 * main - the main program entry point.
 * prompt - display a steady promt for user.
 * execute - takes care of parsing and interpretation.
 * Return: Always 0.
*/

int main(void)
{
	char commands[256];

	while (true)
	{
		prompt();
		input(commands, sizeof(commands));
		execute(commands);
	}
}
