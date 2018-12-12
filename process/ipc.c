#include<stdlib.h>
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


void hello(){
	printf("Hello World\n");
}

int main(){
	pid_t cpid;
	pid_t ppid;
	signal(SIGUSR1, hello);
	if((cpid = fork()) == 0){
		ppid = getppid();
		kill(ppid, SIGUSR1);
		exit(0);
	}else{
		wait(NULL);
	}
}
