#include<stdlib.h>
#include<stdio.h>

#include<signal.h>

void hello(int sugnum) {
	printf("Hello world\n");
}

int main() {
	signal(SIGUSR1, hello);
	raise(SIGUSR1);
}
