#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int num = 123;
int num2 = 111;

void *entry_point(void *value)
{
    int *val = (int*)value;
    printf("\nEntry Point. %d", *val);
    int i = 0 ;
    for(i=0;i<100;i++)
    {
        printf("%d ",*val+i);
    }
    printf("*****^^^^^^^^*****");
    return NULL;
}


int main()
{

    pthread_t thread1, thread2;

    printf("\nFirst thread");

    
    pthread_create(&thread1,NULL,entry_point,&num);
    pthread_create(&thread2,NULL,entry_point,&num2);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);

    printf("\n");
    return EXIT_SUCCESS;
}