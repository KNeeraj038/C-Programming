#include<stdio.h>

// Not supported in GCC compiler.
#pragma startup start
#pragma exit end

// to achieve above we can do below.
void __attribute__((constructor))start();
void __attribute__((destructor))end();

void start(){
    printf("Start");
}

void end(){
    printf("End");
}

int main()
{
    printf("Hello from Main");
}