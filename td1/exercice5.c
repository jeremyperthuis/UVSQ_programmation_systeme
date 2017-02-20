#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER 256


int getcharbuf(void)
{

	static char buf[BUFFER];
	static int ncar;
	static char *p;

	if(ncar==0)
	{
		ncar = read(0,buf,BUFFER);
		p=buf;
	}

	if(ncar-- >0)
	{ 
		return *p++;
	}
	else return EOF;
}

int main()
{
	int res;
	while(1)
	{
		res=getcharbuf();
		if(res==EOF)
		{	
			printf("EOF\n");
			break;
		}
		printf("get : %c\n",res);
	}
}

/* On ne verra jamais apparaitre le EOF car celui ci
	n'apparait pas dans l'entree standard ,seulement 
	dans les fichiers
*/