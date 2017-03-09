#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	pid_t pid, status;
	
	for(int i =0;i<atoi(argv[1]);i++)
	{
		pid=fork();
		if(pid==-1) exit(0);
		if(pid==0) exit(getpid()%10);
	}
}

