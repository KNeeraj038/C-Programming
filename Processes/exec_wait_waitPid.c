#include<stdio.h>
#include<stdbool.h>
#include<unistd.h>

int main()
{
    while(true){
        if(fork() == 0){
            printf("Child Process started and completed ! %d\n", getpid());
            return 0;
        }else{
            wait(NULL);
            printf("Parent just won't die... %d\n", getpid());
            sleep(5);
        }
        printf("----\n");
    }
    
    printf("\n");
    return 0;
}


/*
A call to wait() blocks the calling process until one of its child processes exits or a signal is received. After child process terminates, parent continues its execution after wait system call instruction. 
*/
