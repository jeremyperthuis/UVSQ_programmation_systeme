#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int getchar1(void)
{

	char c;
	int r = read(0,&c,1);

	if(r==1)
	{
		return c;	
	}

	else return EOF;
}


int main()
{
	printf("getchar=%c\n",getchar1());
}