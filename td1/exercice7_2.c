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
	FICHIER *f1, *f2;
	int c;

	f1=my_open(argv[1],"r");
	if(f1==NULL){

		perror("Erreur ouverture 1er Fichier");
		exit(1);
	}

	f1=my_open(argv[2],"w");
	if(f1==NULL){

		perror("Erreur ouverture 2eme Fichier");
		exit(1);
	}

	while((c=mygetc))
			
   exit(EXIT_SUCCESS);
           
}
