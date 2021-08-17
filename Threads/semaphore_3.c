#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include <unistd.h>

#define MAX_CORES 4

sem_t semaphore;

void *do_something(void *id)
{
    sem_wait(&semaphore);
    int t_id = *(int*)id;
    sleep(2);
    printf("\n do_something () t_Id: %d",t_id);
    sem_post(&semaphore);
}

int main()
{
    sem_init(&semaphore,0,1);
    pthread_t *thread = malloc(MAX_CORES * sizeof(pthread_t));
    
    int i=0;
    for(i=0;i<MAX_CORES;i++)
    {
        pthread_create(&thread[i],NULL, &do_something,&thread[i]); 
    }

    for(i=0;i<MAX_CORES;i++)
    {
        pthread_join(thread[i],NULL); 
    }

    sem_destroy(&semaphore);
    printf("\n");
}