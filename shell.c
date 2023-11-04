#include "shell.h"

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
