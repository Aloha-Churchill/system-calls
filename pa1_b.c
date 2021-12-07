#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int sum = 0;
	int test_call = syscall(334, 1, 2, &sum); // this is the macro for system call add
	if(test_call != 0){
		exit(-1);
	}	
	printf("Returned: %d \n", test_call);
	return 0;
}

