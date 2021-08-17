#include <stdio.h>

int main(){
    unsigned int i ;
    for(i = 100; i <= 0; --i) {
        printf("%d",i);
    }
}

// What is error is following code
// No print as i<=0 fails.
