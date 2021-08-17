#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include <unistd.h>

#define MAX_CORE 12
#define ENABLE_SEMAPHORE 1

sem_t mutex;

void *do_something(void *id){

    // start
    int *thread_id = (int *)id;
    if(ENABLE_SEMAPHORE)
        sem_wait(&mutex);
    printf("\nstart --> %d",*thread_id);


    sleep(5);
    //end
    
    //Signal
    printf("\n<--- End %d",*thread_id);
    if(ENABLE_SEMAPHORE)
    sem_post(&mutex);
}

int main(){

    pthread_t thread1;
    pthread_t thread2;
    pthread_t *threads = malloc( MAX_CORE * (sizeof(pthread_t)));

    sem_init(&mutex,0,1);
    
    int i=0;
    for(i=0;i<MAX_CORE;i++)
    {
        int a = i;
        pthread_create(&threads[i], NULL, do_something, );
        sleep(2);
    }
    
    for(i=0;i<MAX_CORE;i++)
    {
        pthread_join(threads[i], NULL);
    }
    
    sem_destroy(&mutex);

    return EXIT_SUCCESS;
}