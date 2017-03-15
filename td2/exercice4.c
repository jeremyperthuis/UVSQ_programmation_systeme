#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <sys/times.h>
#include <time.h>

// Executer le programme avec un chemin de dossier


void discount_ls(char *arg)
{
	char * commande = "ls -R ";
	char *res = NULL;
	res=malloc(sizeof(char)*(strlen(arg)+strlen(commande)));
	// on concatene l'argument avec la chaine "ls"
	strcat(res,commande);
	strcat(res,arg);
	printf("res=%s\n",res);
	// on invoque la commande
	system(res);	
}

int main(int argc, char** argv)
{
	struct tms start;
	struct tms stop;

	times(&start);
	discount_ls(argv[1]);
	times(&stop);
	clock_t t0 = (stop.tms_cutime) - (start.tms_cutime);
	printf("%d\n", (int)(t0));
}

