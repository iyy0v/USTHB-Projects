
// 	ZITOUNI AYMEN ADBESSALAM 191931947450
//	NAIT MIHOUB AYOUB 191931047451



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <pthread.h>
#include <semaphore.h>

int i,j;
int boites[200],cartons[100];

sem_t RC,BO,AS,EM,Ver;

void* mRC(void *t) {
while(1) {
	usleep(rand()%25000 + 5000);
	sem_post(&RC);}
}
void* mBO(void *t) {
while(1) {
	usleep(rand()%25000 + 5000);
	sem_post(&BO);
	}
}
void* mAS(void *t) {
	while(1) {
		sem_wait(&RC);
		sem_wait(&BO);
		
		sem_post(&AS);
	}
}
void* mEM(void *t) {
	while(1) {
		sem_wait(&AS);
		boites[i]++;
	}
}
void* mVer(void *t) {

	while(1) {
		sleep(2);
		int temp = boites[i];
		
		if(boites[i]>100) boites[i] = 100;
			
		if(boites[i]==100) {
			i++;
			sem_post(&Ver);
			printf("\nStylos dans la boite %d : %d, exces: %d",i,boites[i-1], temp-100);	
		}
		
	}
	
}
void* mF(void *t) {
	while(1) {
		sem_wait(&Ver);
		cartons[j]++;
		if(cartons[j]==10) {
			j++;
	
			printf("\n\nBoites produites = %d \nStylos au derniere boite = %d \nCartons produites = %d \nBoites dans le carton %d = %d\n",i,boites[i-1],j, j, cartons[j-1]);
			}
		}	
}

int main(){
	pthread_t pth_id[6];
	printf("Debut");
	i = 0;
	j = 0;
	sem_init(&RC, 0, 0);
	sem_init(&BO, 0, 0);
	sem_init(&AS, 0, 0);
	sem_init(&EM, 0, 0);
	sem_init(&Ver, 0, 0);
	
	
	pthread_create(&pth_id[0], NULL, mRC,0);
	pthread_create(&pth_id[1], NULL, mBO,0);
	pthread_create(&pth_id[2], NULL, mAS,0);
	pthread_create(&pth_id[3], NULL, mEM,0);
	pthread_create(&pth_id[4], NULL, mVer,0);
	pthread_create(&pth_id[5], NULL, mF,0);

	while(1);
	return 0;
}
