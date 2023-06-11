#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <pthread.h>
#include <semaphore.h>

int compteur[2];
int playedMove[2];
sem_t mutex1;
sem_t mutex2;

void* jouer(void *t)
{
	long pos = (long) t;
	srand(time(NULL)); 
	
	int test = 1;
	int var = (long) (&test);
	int temp = 2408918726 % 3;
	
	printf("rand %ld\n", temp);
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
		
	if(pos==0) {
		sem_post(&mutex1);
	}
	else {
		sem_post(&mutex2);
	}
}
void* compter(void *t)
{
	sem_wait(&mutex1);
	sem_wait(&mutex2);
	
	if(playedMove[0]>playedMove[1]) {
		compteur[0]++;
	}
	else if(playedMove[0]<playedMove[1]) {
		compteur[1]++;
	}
	else {
		
	}
	sem_post(&mutex1);
	sem_post(&mutex2);
}

int main() {
	pthread_t pth_id[3];

	
	sem_init(&mutex1, 0, 0);
	sem_init(&mutex2, 0, 0);
	
	compteur[0] = 0;
	compteur[1] = 0;
	
		pthread_create(&pth_id[0], NULL, jouer,(void *) 0);

		pthread_create(&pth_id[1], NULL, jouer,(void *) 1);
		pthread_create(&pth_id[2], NULL, compter, 0);
		
		pthread_join(pth_id[0],NULL);
		pthread_join(pth_id[1],NULL);
		pthread_join(pth_id[2],NULL);
		
		printf("Score: %d | %d\n",compteur[0],compteur[1]);
		
	

}
