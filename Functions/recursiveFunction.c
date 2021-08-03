#include<stdio.h>

int fact(int num)
{
    // n*n-1*n-2
    int i=0;
    
    int res = 1;
    for(i=num;i>0;i--)
    {
        res = res * i;
    }
    return res;
}

int factRecur(int num)
{
    // int res;
    if(num <= 1)
        return 1;
    else
    {
        return num * factRecur(num-1);
    }
    
}

int main()
{
    int number;
    scanf("%d",&number);
    
    printf("%d", fact(number));
    printf("\nUsing recusion %d", factRecur(number));
    printf("\n");
    return 0;

}