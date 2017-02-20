#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



#define BUFFER 256



int main(int argc, char *argv[])
{

	char buf[BUFFER];
	int fd1=open("toto.txt",O_RDONLY);
	int fd2=open("titi.txt",O_CREAT | O_WRONLY,S_IRWXU);
	read(fd1,&buf,BUFFER);
	write(fd2,&buf,BUFFER);
	close(fd1);
	close(fd2);

return EXIT_SUCCESS;
}



/****************************************
	VERSION AVEC BOUCLE SANS BUFFER
****************************************/
/*
int main(int argc, char *argv[])
{

	char buf[BUFFER];
	int fd1=open("toto.txt",O_RDONLY);
	int fd2=open("titi.txt",O_CREAT | O_WRONLY,S_IRWXU);
	while(read(fd1,&buf,1)
	{
		write(fd2,&buf,BUFFER);
	}
	close(fd1);
	close(fd2);

return EXIT_SUCCESS;
}
*/