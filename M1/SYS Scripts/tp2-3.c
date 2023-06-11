#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	pid_t cpid;
	int f1,f2,f3;
	float *res;
	int pid1 = fork();
	if(pid1 == 0) {
		*res = 5.6;
		exit(res);
	}
	int pid2 = fork();
	if(pid2 == 0) {
		exit(10);
	}
	int pid3 = fork();
	if(pid3 == 0) {
		exit(3);
	}
	waitpid(pid1,&f1,0);
	waitpid(pid2,&f2,0);
	waitpid(pid3,&f3,0);
	int result = WEXITSTATUS(f3) * WEXITSTATUS(f2) + WEXITSTATUS(f1);
	printf("%f\n",*WEXITSTATUS(f1));
	printf("%d x %d + %d = %d\n",WEXITSTATUS(f3),WEXITSTATUS(f2),WEXITSTATUS(f1),result);
	
	return 0;		
}
