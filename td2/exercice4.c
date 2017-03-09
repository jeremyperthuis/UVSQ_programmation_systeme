#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>



int main(int argc, char** argv)
{
	char * commande = "ls ";
	char *res = NULL;
	res=malloc(sizeof(char)*(strlen(argv[1])+strlen(commande)));
	// on concatene l'argument avec la chaine "ls"
	strcat(res,commande);
	strcat(res,argv[1]);
	printf("res=%s\n",res);
	// on invoque la commande
	system(res);	
}

