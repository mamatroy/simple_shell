#include "shell.h"

void execute(const char *commands)
{
	pid_t child_pid = fork();

	if (child_pid == -1){
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (child_pid == 0)
	{
		execlp(commands, commands, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	} else 
	{
		wait(NULL);

	
	}

}

