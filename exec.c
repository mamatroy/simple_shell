#include "shell.h"

void execute(const char *commands)
{
        pid_t child_pid = fork();

        if (child_pid == -1){
                perror("Error forking process");
                exit(EXIT_FAILURE);
        } else if (child_pid == 0)
        {
                char arg[256];
                int count = 0;

                char *token = strtok((char *)command,"");
                while (token != NULL)
                {
                arg[count++] = token;
                }
                arg[count] = NULL;

                execvp(arg[0], arg);

                h_print("Error Executing command. \n");
                exit(EXIT_FAILURE);
        } else
        {
                wait(NULL);


        }

}
