#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	printf("Hello to process with PID: %d\n",getpid());
	return 0;
}
