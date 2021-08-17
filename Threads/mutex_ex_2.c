#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>

#define MAX_CORES 12
#define COUNT_TO 10000

#define ENABLE_MUTEX 1


int number  = 0;
static pthread_mutex_t mutext = PTHREAD_MUTEX_INITIALIZER;

void *count_number()
{
    for(;;)
    {
        if(ENABLE_MUTEX)
           pthread_mutex_lock(&mutext);
    
        if(number >= COUNT_TO)
        {
            //STOP.
            if(ENABLE_MUTEX)
                pthread_mutex_unlock(&mutext);
            return NULL;
        }
        number ++;
        if(ENABLE_MUTEX)
            pthread_mutex_unlock(&mutext);
        
        printf("\nnum : %d",number);
    }
}

int main()
{
    int i = 0;
    pthread_t *pthread = malloc(MAX_CORES * sizeof(pthread_t));

    for(i=0;i<MAX_CORES;i++)
    {
        pthread_create(&pthread[i], NULL, count_number, NULL);
        // pthread_create((*void)pthread[0],NULL, count_number,NULL);
        // pthread_create()
    }
    // printf("\nincrementated value is: %d",number);
    
    for(i=0;i<MAX_CORES;i++)
    {
        pthread_join(pthread[i],NULL);
    }
    
    printf("\n");
    return EXIT_SUCCESS;
}