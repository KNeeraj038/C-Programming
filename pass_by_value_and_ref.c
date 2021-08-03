#include<stdio.h>


// pass by value
void update_val(int n)
{
    n++;
    printf("\nInside fun() %d", n);
}


// pass by ref.
void update_val2(int *number)
{
    (*number) = (*number) + 2;

    printf("\nInside fun2() %d", *number);
}

int main()
{
    int num = 10;

    printf("\nNumber - %d",num);

    update_val(num);
    printf("\nNumber after update_val() - %d",num);

    update_val2(&num);
    printf("\nNumber after update_val2() - %d",num);

    printf("\n");
}