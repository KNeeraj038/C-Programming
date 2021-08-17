#include<stdio.h>

int main()
{
    
    if(fork() == 0){
        printf("\nChild Process: %d", getpid());
        execl("/bin/ls", "ls", "-al", NULL); // Last arg. to tell no more arg. is there.
        printf("After process completion.");  // it will not ne printed. It signfies that the exec only returns when process creation fail or in case of error.
    }else{
        printf("\nParent Process: %d", getpid());
    }
    
    printf("\n");
    return 0;
}

// variants can be 
/*
execl,
execlp,
execle,
execv,
execvp,
execvpe
*/