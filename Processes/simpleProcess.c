#include<sys/types.h>  // for pid
#include<stdio.h>
int main()
{
    
    if(fork() == 0){  // =0 means its a child process.
        //child process.
        printf("\nChild Process: %d", getpid());
    }else{
        printf("\nParent Process: %d", getpid());
    }
    
    printf("\n");
    return 0;
}