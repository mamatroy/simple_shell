#include "shell.h"

void input(char *commands, size_t size){
	if (fgets(commands, size, stdin) == NULL){
		if (feof(stdin)){
			h_print("\n");
			exit(EXIT_SUCCESS);
		} else {
			h_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	commands[strcspn(commands, "\n")] = '\0';
}
