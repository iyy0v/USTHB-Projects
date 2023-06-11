#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	
	int pid1 = fork();
	if(pid1 != 0) {
		int pid2 = fork();
		if(pid2 == 0) {
			printf("pid : %d",getpid());
			printf("fils de %d : bonjour\n",getppid());
			sleep(5);
			printf("fils de %d : au revoir\n",getppid());
		}
		else {
			sleep(6);
		}
	}
	else {
		printf("pid : %d",getpid());
		printf("fils de %d : bonjour\n",getppid());
		sleep(5);
		printf("fils de %d : au revoir\n",getppid());
	}
	return 0;		
}
