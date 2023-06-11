#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

long compteur[3];


void* fonc_thread(void *k)
{
	long j;
	j =(long ) k;
	printf("Thread numero %ld : mon tid est %ld\n",j,pthread_self());
	for(;;) 
	{
		sleep(1);compteur[j]++; }
}

int main() {
	long i, num;
	pthread_t pth_id[3];
	
	for(num=0;num<3;num++) {
		pthread_create(&pth_id[num], 0, fonc_thread, (void *) num);
		printf("Main: thread numero %ld creee: id = %ld\n",num,pth_id[num]);
	}	
	sleep(1);
	printf("Affichage des compteurs (20 fois)\n");
	for(i=0;i<20;i++) {
		printf("%ld \t%ld \t%ld \n",compteur[0], compteur[1], compteur[2]);
		sleep(1);
	}
	exit(0);
}
