#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>
#include <math.h>

int buffer[10];
int t;
sem_t plein, vide, mutex_t;

void produire(int p)
{
	buffer[t] = rand() % 101;
	printf("P%d a produit: %d\n",p,buffer[t]);
	
	sem_wait(&mutex_t);
	t++;
	sem_post(&mutex_t);
}


void consommer(int p)
{
	int temp = buffer[t-1];
	printf("C%d a consomme: %d\n",p,temp);
	
	sem_wait(&mutex_t);
	t--;
	sem_post(&mutex_t);
}

void *producteur(void *ptr)
{
	int *argptr = (int *) ptr;
	int arg = *argptr;
	for(;;){
		usleep(rand()/100);
		sem_wait(&vide);
		produire(arg);
		sem_post(&plein);
	}
}


void *consommateur(void *ptr)
{
	int *argptr = (int *) ptr;
	int arg = *argptr;
	for(;;) {
		usleep(rand()/100);
		sem_wait(&plein);
		consommer(arg);
		sem_post(&vide);
	}
}

int main() {
	int nbProd = 3;
	int nbCons = 3;
	pthread_t prod[nbProd];
	pthread_t cons[nbCons];
	
	sem_init(&vide,0,10);
	sem_init(&plein,0,0);
	sem_init(&mutex_t,0,1);
	
	for(int i=0; i<nbProd; i++) pthread_create(&prod[i], NULL, producteur, &i);
	for(int i=0; i<nbCons; i++) pthread_create(&cons[i], NULL, consommateur, &i);
	
	for(int i=0; i<nbProd; i++) pthread_join(prod[i], NULL);
	for(int i=0; i<nbCons; i++) pthread_join(cons[i], NULL);
	
	exit(0);

	
}
