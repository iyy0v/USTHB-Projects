#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <math.h>

int main() {
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	float d = b*b - 4*a*c;
	printf("Delta = %f\n",d);
	if(d > 0) {
		int f1;
		int pid1 = fork();
		if(pid1 == 0){
			float x = (-b - sqrt(d))/(2*a);
			printf("X1 = %f\n",x);
			exit(0);
		}
		int pid2 = fork();
		if(pid2 == 0){
			float x = (-b + sqrt(d))/(2*a);
			printf("X2 = %f\n",x);
			exit(0);
		}
		while(wait(NULL) != -1);
	}
	else if(d == 0) {
		int f1;
		int pid1 = fork();
		if(pid1 == 0){
			float x = -b/(2*a);
			printf("X = %f\n",x);
			exit(0);
		}
		int pid2 = fork();
		while(wait(NULL) != -1);
	}
	else {
		int f1;
		int pid1 = fork();
		if(pid1 == 0){
			execlp("./stop","stop",NULL);
		}
		while(wait(NULL) != -1);
	}
	return 0;
}
