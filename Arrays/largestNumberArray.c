#include<stdio.h>
#include<limits.h>

int main()
{
    int size = 10;
    int arr[size];
    printf("\nEnter array:");
    int i=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for(i=1;i<size;i++){
        if(arr[i] > max)
        {
            max = arr[i];
        }
        
    }

    printf("Largest number in array is %d", max);
    printf("\n");
}