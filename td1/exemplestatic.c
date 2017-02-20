#include <stdio.h>
#include <stdlib.h>
/*
	dans une fonction, une variable static garde 
	sa valeur entre 2 invocations
*/

void foo()
{
	 static int a = 0;
	printf("a=%d\n",a);
	a++;
}

int main()
{

	int i;
	for(i=0;i<10;i++){ foo();}
	return 0;
}

/*******************
execution avec static : 

a=0
a=1
a=2
a=3
a=4
a=5
a=6
a=7
a=8
a=9

execution sans static : 

a=0
a=0
a=0
a=0
a=0
a=0
a=0
a=0
a=0
a=0

*/

