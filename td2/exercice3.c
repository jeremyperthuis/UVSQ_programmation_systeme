#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

void NxM_processus(int n, int m)
{

	int pid;
	int i;
	int status;
	

	for(i=0;i<n;i++)
	{
		pid = fork();
		
		if(pid == 0)
		{
			if(m>1)
				NxM_processus(n,m-1);
			
			exit(getpid());
				
		}
		
		printf("processus cree : %d\n",pid);
	}
	
	for(i=0;i<n;i++)
	{
		wait(&status);
	}	
}

int main(int argc, char*argv[])
{
	printf("pere pid=%d\n",getpid());
	NxM_processus(atoi(argv[1]),atoi(argv[2]));
}

