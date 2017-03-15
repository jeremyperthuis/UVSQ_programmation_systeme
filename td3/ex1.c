#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <pthread.h>

/*****************************************
genere N threads renvoyant leur numero*2
pour compiler : gcc exemple1.c -lpthread
 *****************************************/
 
#define N 10

void* affichage(void* arg)
{
	int* ret = malloc(sizeof(int));
	int val = *((int*)arg);
	printf("thread %d\n",val);
	*ret = val*2;
	return ret;
}

int main()
{
	int i, num[N];
	void* join;
	
	pthread_t thr[N];		//declaration du tableau de thread
	
	for(i=0;i<N;i++)
	{
		num[i] = i+1;
		pthread_create(&thr[i],NULL,affichage,(void*)&num[i]);
	}
	
	
	for(i=0;i<N;i++)
	{
		pthread_join(thr[i], &ret);
		printf("%d\n", *(int*)(join));
		free(join);
	}
	
	return 0;
}
