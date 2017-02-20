#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAX 1024

struct FICHIER {
	
	int fd;				//descripteur de fichier
	char bf[MAX];		// buffer
	int m;				// choix lecture ou ecriture
	char *p;			//
	int reste;			// nombre d'element qui reste
	
}

FICHIER my_open(char* pathname,int mode)
{
	FICHIER *f;
	int m;
	int fd;
	int mode;
	switch (mode[]){
	case "n"
	
	}
}

int main(int argc, char *argv[])
{


			
   exit(EXIT_SUCCESS);
           
}
