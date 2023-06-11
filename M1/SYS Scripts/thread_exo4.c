#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <pthread.h>
#include <semaphore.h>

#define TURNS 20

int compteur[2];
int playedMove[2];
sem_t mutex1;
sem_t mutex2;
sem_t mutex3;
sem_t mutex4;

void joueur(long pos){
	srand(time(NULL)); 
	playedMove[pos] = (rand() + (rand()*pos)) % 3 ;
	switch(playedMove[pos]) {
		case 0: 
			printf("Player %ld : Pierre\n",pos+1);
			break;
		case 1: 
			printf("Player %ld : Feuille\n",pos+1);
			break;
		case 2: 
			printf("Player %ld : Ciseau\n",pos+1);
			break;
	}
}

void* jouer(void *t)
{
	long pos = (long) t;
	for(int i=0; i<TURNS; i++) {
		joueur(pos);
			
		if(pos==0) {
			sem_post(&mutex1);
			sem_wait(&mutex3);
		}
		else {
			sem_post(&mutex2);
			sem_wait(&mutex4);
		}
	}
}



void compt(){
	if(playedMove[0] == playedMove[1]) {
		
	}
	else if(playedMove[0] - playedMove[1] == 1 || playedMove[0] - playedMove[1] == -2 ) {
		compteur[0]++;
	}
	else {
		compteur[1]++;
	}
	printf("Score: %d | %d\n\n",compteur[0],compteur[1]);
}


void* compter(void *t)
{
	for(int i=0; i<TURNS; i++) {
		sem_wait(&mutex1);
		sem_wait(&mutex2);
		
		compt();
		sleep(1);
		
		sem_post(&mutex3);
		sem_post(&mutex4);
	}
}

int main() {
	pthread_t pth_id[3];
	
	sem_init(&mutex1, 0, 0);
	sem_init(&mutex2, 0, 0);
	sem_init(&mutex3, 0, 0);
	sem_init(&mutex4, 0, 0);
	
	compteur[0] = 0;
	compteur[1] = 0;
	
	pthread_create(&pth_id[0], NULL, jouer,(void *) 0);
	pthread_create(&pth_id[1], NULL, jouer,(void *) 1);
	pthread_create(&pth_id[2], NULL, compter, 0);
		
	pthread_join(pth_id[0],NULL);
	pthread_join(pth_id[1],NULL);
	pthread_join(pth_id[2],NULL);
		
}
