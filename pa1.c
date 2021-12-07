#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int test_call = syscall(333); // this is the macro for system call helloworld
	if(test_call != 0){
		exit(-1);
	}	
	printf("Returned: %d \n", test_call);
	return 0;
}
