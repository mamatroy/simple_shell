#include "shell.h"

void execute(const char *commands)
{
        pid_t child_pid = fork();

        if (child_pid == -1){
                perror("Error forking process");
                exit(EXIT_FAILURE);
        } else if (child_pid == 0)
        {
                char *arg[128];
                int count = 0;

                char *token = strtok((char *)commands," ");
                while (token != NULL)
                {
		arg[count++] = token;
		token = strtok(NULL, " ");
                }
                arg[count] = NULL;

                execvp(arg[0], arg);

                h_print("Error Executing command.\n");
                exit(EXIT_FAILURE);
        } else{
                wait(NULL);
	}

}
