#include "shell.h"
/**
 * execute - execute the prompt.
 * @commands: input passed by the user.
 *
 * Return: Always 0.
 */

void execute(const char *commands)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error forking process");
		exit(EXIT_FAILURE);
	} else if (child_pid == 0)
	{
		char *arg[128];
		int count = 0;
		char *token = strtok((char *)commands, " ");

		while (token != NULL)
		{
			arg[count++] = token;
			token = strtok(NULL, " ");
		}
		arg[count] = NULL;
		if (execve(arg[0], arg, NULL) == -1)
		{
			perror("Error executing command");
			exit(EXIT_FAILURE);
		}
	} else
	{
		wait(NULL);
	}
}
