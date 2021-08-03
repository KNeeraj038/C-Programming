#include<stdio.h>
#include <stdlib.h>

int main(){
    char *str ="Neeraj";
    printf("%s",str);

    //Ex-1, 
    // String stored as a array variable. 
    //segmentation fault can't change char pointer as it is tored in share read oly menonry
    // *(str+1)='n';
    
    // Ex-2,
    // Stored as a Pointer variable.
    // Changing string will not give any error as it is stored in a data segment.
    char str1[4] = "Nee";
    *(str1+1) = 'n';
    printf("%s", str1);
    
    //Ex-3,
    // Dynamic allocated in Heap Segment.
    char *str2;
    int size=4;
    str2 = (char*)malloc(sizeof(char)*size);
    *(str2) = 'R';  
    *(str2+1) = 'K';
    *(str2+2) = 'U';
    *(str2+3) = 'M';
    
    printf("\n%s",str2);




    printf("\n");
    return 0;
}
