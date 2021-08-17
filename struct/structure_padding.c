#include <stdio.h>  

#pragma pack(2)

struct base  
{  
    int a;  
    char b;  
    double c;  
}__attribute__((packed));  

struct base1  
{  
    int a;  
    char b;  
    double c;  
};  

struct base2  
{  
    char a;  
    int c;  
    char b;  
};  

int main()  
{  
    struct base var;  
    printf("\nThe size of the var is : %d", sizeof(var));  
   
    struct base1 var1;  
    printf("\nThe size of the var is : %d", sizeof(var1));  
    

    struct base2 var2;  
    printf("\nThe size of the var is : %d", sizeof(var2));  
    
    printf("\n");
    return 0;  
} 

