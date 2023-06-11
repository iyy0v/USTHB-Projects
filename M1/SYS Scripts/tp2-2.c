#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	printf("Debut processus fils 1\n");
	int pid1 = fork();
	if(pid1 != 0) {
		printf("Debut processus fils 2\n");
		int pid2 = fork();
		if(pid2 == 0) {
			printf("fils de %d : bonjour\n",getppid());
			sleep(5);
			printf("fils de %d : au revoir\n",getppid());
		}
		else {
			while(wait(NULL)>0);
			printf("execution terminee.\n");
			
		}
	}
	else {
		printf("fils de %d : bonjour\n",getppid());
		sleep(5);
		printf("fils de %d : au revoir\n",getppid());
	}
	return 0;		
}
