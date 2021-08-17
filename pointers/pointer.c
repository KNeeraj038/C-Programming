#include<stdio.h>
#include<stdlib.h>

int main()
{
    //++ptr , ++*ptr , ptr++
    int x = 10;  
    int *p = &x;

    printf("*p = %d", *p); //10

    printf("\n ++p = %d", ++p); // addr(x)+1 
    printf("\n ++*p = %d", ++*p); // Garbage value.
    printf("\n p++ = %d", p++); // addr(x); 

    printf("\n");

    return EXIT_SUCCESS;
}