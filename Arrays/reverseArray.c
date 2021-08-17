#include<stdio.h>
#include<limits.h>

int main()
{

    int size=0;
    
    printf("Size of array:");
    scanf("%d",&size);
    int arr[size];
    
    printf("\nEnter array:");
    int i=0;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int temp=0;
    
    printf("\nArray entered is :");

    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }

    for(i=0;i<size/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }



    printf("\n Reversed Array entered is :");
    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }

    printf("\n");
}