#include<stdio.h>

int main()
{
    int arr[4] = {1,2,3,4};

    int arr2[5];
    int i=0;
    for(i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++){
        printf("%d",&arr2[i]);
    }
    printf("\n");
}