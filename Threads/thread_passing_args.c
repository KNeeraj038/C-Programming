#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

typedef struct{
    int num;
    int *threadId;
} data;

int num = 123;
int num2 = 111;

void *entry_point(void *value)
{
    data* d = value;
    int *th = (int *)d->threadId;
    printf("\nEntry Point. %d, %d", d->num,*th);
    int i = 0 ;
    printf("\n--------------");
    return NULL;
}


int main()
{
    pthread_t thread1, thread2;

    printf("\nFirst thread");

    data d1, d2;
    d1.num = num;
    d1.threadId = (void *)&thread1;

    d2.num = num2;
    d2.threadId = (void *)&thread2;

    pthread_create(&thread1,NULL,entry_point,&d1);
    pthread_create(&thread2,NULL,entry_point,&d2);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);

    printf("\n");
    return EXIT_SUCCESS;
}