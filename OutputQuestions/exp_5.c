#include <stdio.h>

void main()
{
    int i = 0;
    while (i < 10)
    {
        i++;
        printf("hi\n");
        while (i < 8)
        {
        i++;
        printf("hello\n");
        }
    }
}

/*
OPTIONS:
a) Hi is printed 8 times, hello 7 times and then hi 2 times
b) Hi is printed 10 times, hello 7 times
c) Hi is printed once, hello 7 times
d) Hi is printed once, hello 7 times and then hi 2 times

Answer: D
*/
