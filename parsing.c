#include "shell.h"
/**
 * input - reads commands from user.
 * @commands: passed command from the user.
 * @size: tracks the size for character passed.
 * Return: Always 0.
 */

void input(char *commands, size_t size)
{
	if (fgets(commands, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			h_print("\n");
			exit(EXIT_SUCCESS);
		} else
		{
			h_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	commands[strcspn(commands, "\n")] = '\0';
}
