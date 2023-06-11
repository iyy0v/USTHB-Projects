#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

long compteur[3];


void* fonc_thread(void *k)
{
	int var;
	long j;
	j =(long ) k;
	printf("Thread numero %ld : mon tid est %ld\n",j,pthread_self());
	for(var=0;var<20;var++) {
		compteur[j]++;
		printf("%ld\n", compteur[j]);
	}
}


int main() {
	long i, num;
	pthread_t pth_id[3];
	
	for(num=0;num<3;num++) {
		pthread_create(&pth_id[num], 0, fonc_thread, (void *) num);
		printf("Main: thread numero %ld creee: id = %ld\n",num,pth_id[num]);
	}
	sleep(1);
	exit(0);
}
