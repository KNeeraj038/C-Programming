#include<stdio.h>

int main()
{
    int a = 1, b=2;
    if (a == 1 || b == 2) {
        printf("\nEntered!");
    }

    //above can be written as 
    //1 FALSE
    if (a == 1) 
        if (b == 2) { printf("\nEntered!-1"); }

    //2 TRUE
    if (a == 1){

    } 
    if (b == 2){
        printf("\nEntered!-2");
    }
    //3 FALSE
    if (a == 1){} else if (b == 2){
        printf("\nEntered!-3");
    }   



}