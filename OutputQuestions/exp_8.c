#include <stdio.h>
#include <string.h>

int main(){
   func();
}

void func() {
    char* str = "hello";
    char* str2;
    strcpy(str2, str); // Segmentation fault.
    printf("%s", str2);
}

// Segmentation fault.