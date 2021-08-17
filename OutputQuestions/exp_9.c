#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    switch (a)
    {
        case a*b:  // it should be integer constant.
            printf("yes ");
        case a-b:  // it should be integer constant.
            printf("no\n");
        break;
    }
}

/*
a) yes
b) no
c) Compile time error
d) yes no
*/