#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include <unistd.h>

#define MAX_PRODUCER 20
#define MAX_CONSUMER 2 

#define MAX_SLOTS 10

int count = 0;
int slots[MAX_SLOTS];

sem_t sem_empty;
sem_t sem_full;

void *producer()   // focus on the semaphores here. 
{
    while(1)
    {
        sem_wait(&sem_empty);   // 1 basically semempty will be incremented
        int randNumber  = rand() % 100;
        slots[count] = randNumber;
        sleep(1);        
        printf("\nProduced Slot @ %d with Value %d",count, slots[count]);
        count++; 
        sem_post(&sem_full);    // 2  basically semfull will be decremented
    }
}

void *consumer()   // focus on the semaphores here. 
{
    while(1)
    {
        sem_wait(&sem_full);   // 1 basically semfull will be incremented
        sleep(1);
        printf("\nConsumed slot @ %d with Value %d",count-1, slots[count-1]);
        count--;
        sem_post(&sem_empty);    // 2  basically semfull will be decremented
    }

}

int main()
{
    sem_init(&sem_empty,0,MAX_SLOTS);  // empty count in 3rd arg
    sem_init(&sem_full,0,0);  // Full count in 3rd arg
        
    int i=0;
    pthread_t *thread_prod = malloc(MAX_PRODUCER * sizeof(pthread_t));    
    pthread_t *thread_cons = malloc(MAX_CONSUMER * sizeof(pthread_t));

    // Thread creation
    for(i=0;i<MAX_PRODUCER;i++)
    {
        pthread_create(&thread_prod[i],NULL, &producer,&thread_prod[i]); 
    }
    for(i=0;i<MAX_CONSUMER;i++)
    {
        pthread_create(&thread_cons[i],NULL, &consumer,&thread_cons[i]); 
    }

    //thread join
    
    for(i=0;i<MAX_PRODUCER;i++)
    {
        pthread_join(thread_prod[i],NULL); 
    }
    for(i=0;i<MAX_CONSUMER;i++)
    {
        pthread_join(thread_cons[i],NULL); 
    }

    printf("\n");
    return EXIT_SUCCESS;
}