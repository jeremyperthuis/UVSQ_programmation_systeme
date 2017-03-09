#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>




int main()
{
	pid_t pid;
	int status;

	
	if(pid=fork()==0)
	{
		sleep(5);
		printf("on est dans le fils, pid =%d, pid du pere=%d \n",getpid(),getppid());
		exit(getpid()%10);

	}
	else
	{
		printf("on est dans le pere, pid=%d,\n",getpid());
		wait(&status);
		if(WIFEXITED(status))
		{
			printf("le processus fils s'est terminé normalement, status =%d\n",
					WEXITSTATUS(status));
		}
	}
}