#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int n = 10000;
int a[10000][10000],b[10000][10000],c[10000][10000];

void* add_matrice_haut_droite(void *t)
{
	for(int i=0; i<n/2; i++) {
		for (int j=n/2; j<n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	} 
}
void* add_matrice_haut_gauche(void *t)
{
	for(int i=0; i<n/2; i++) {
		for (int j=0; j<n/2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	} 
}
void* add_matrice_bas_droite(void *t)
{
	for(int i=n/2; i<n; i++) {
		for (int j=n/2; j<n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	} 
}
void* add_matrice_bas_gauche(void *t)
{
	for(int i=n/2; i<n; i++) {
		for (int j=0; j<n/2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	} 
}

int main() {
	pthread_t pth_id[4];

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			a[i][j] = 1;
			b[i][j] = i * n + j;
		}
	} 

	pthread_create(&pth_id[0], 0, add_matrice_haut_droite, 0);
	pthread_create(&pth_id[1], 0, add_matrice_haut_gauche, 0);
	pthread_create(&pth_id[3], 0, add_matrice_bas_droite, 0);
	pthread_create(&pth_id[4], 0, add_matrice_bas_gauche, 0);


	pthread_join(pth_id[0],NULL) ;
	pthread_join(pth_id[1],NULL) ;
	pthread_join(pth_id[2],NULL) ;
	pthread_join(pth_id[3],NULL) ;
	
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			printf("%d ",c[i][j]);
		}
		printf("\n");
	} 
	
	exit(0);	
}
