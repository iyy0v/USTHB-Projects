#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int l = 1;
char c;
// char s[50];

void* read_thread(void *k)
{
	while(c!='F'){
		if(l == 1) {
			// scanf(" %c%s", &c, s);
			scanf(" %c", &c);
			l = 0;	
		}
	}
	printf("Le thread de lecture est mort.\n");
}

void* write_thread(void *k)
{
	while(c!='F') {
		if(l == 0 && c != 'F') {
			printf("%c\n",c);
			l = 1;
		}
	}
	printf("Le thread d'ecriture est mort.\n");
}

int main() {
	long i, num;
	pthread_t pth_id[2];

	pthread_create(&pth_id[0], 0, read_thread, 0);
	pthread_create(&pth_id[1], 0, write_thread, 0);


	pthread_join(pth_id[0],NULL) ;
	pthread_join(pth_id[1],NULL) ;
	
	exit(0);	
}
