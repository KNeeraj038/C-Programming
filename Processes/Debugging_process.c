#include<sys/types.h>  // for pid
#include<stdio.h>
#include<stdbool.h>
#include<unistd.h>
#include<sys/wait.h>

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
1. gcc -g <file_name> 
2. gdb ./a.out

3. break main

Fork():
4. set follow-fork-mode child  
   or,
   set follow-fork-mode parent

exec():
4. set follow-exec-mode 
5. run
*/