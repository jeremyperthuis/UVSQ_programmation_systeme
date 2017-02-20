
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*
int faux(char *nom) //fonctionne
{
	int fp;
	char buf[20];
	int c;
	c = open(nom,O_RDONLY,S_IWRITE);
	read(c,&buf,20);
	printf("%s\n",buf);
	close(c);
	return c;
}
*/
/*
int faux(char *nom) //fonctionne
{
	int fp;
	int c;
	fp = open(nom,O_RDONLY);
	read(fp,&c,1);
	//printf("%s\n",buf);
	close(fp);
	return c;
}
*/


int faux(char *nom)
{
	FILE *fp;
	int c;
	fp = fopen("nom","r");
	fread (&c,1,sizeof(int),fp);
	fclose(fp);
	return c;
}

int main(int argc, char *argv[])
{
	//int var = faux("toto.txt");
	//printf("var :%d\n",var);

return EXIT_SUCCESS;
}
