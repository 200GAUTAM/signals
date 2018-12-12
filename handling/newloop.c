#include<stdlib.h>
#include<stdio.h>
#include<signal.h>

void hello(int signum){
	printf("Hello World\n");
}

int main(){
	signal(SIGINT, hello);

	while(1);
}


