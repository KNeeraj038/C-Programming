#include <stdio.h>

int* func() {
    int x = 10;
    return &x; // It is a lifetime is only inside the block.
}

int main() {
    printf("%d",*func());
}


/*
Learning / Explaination:
------------------------
The local variables have a lifetime which extends only inside the block in which it is defined.
The moment the control goes outside the block in which the local variable is defined,
the storage for the variable is no more allocated (not guaranteed).
Therefore, using the memory address of the variable outside the lifetime area of the variable will be undefined behaviour.

*/