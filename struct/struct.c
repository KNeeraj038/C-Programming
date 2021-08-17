#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int age;
    char *name;   
} emp;

int main(){
    
    emp e1;
    e1.age = 21;
    e1.name = malloc(11*sizeof(char));
    strcpy(e1.name, "Employee-1");
    printf("\nName: %s , age: %d",e1.name, e1.age);

    // struct to a pointer.
    emp *e2_ptr = &e1;
    (*e2_ptr).age =  23;
    (*e2_ptr).name = realloc((*e2_ptr).name, 15 * sizeof(char));
    strcpy((*e2_ptr).name, "Employee-2");
    printf("\nName: %s , age: %d",(*e2_ptr).name, (*e2_ptr).age);

    // or,
    emp *e2_ptr1 = &e1;
    e2_ptr1->age =  23;
    e2_ptr1->name = realloc(e2_ptr1->name, 15 * sizeof(char));
    strcpy(e2_ptr1->name, "Employee-3");
    printf("\nName: %s , age: %d",e2_ptr1->name, e2_ptr->age);

    printf("\n");

    return EXIT_SUCCESS;
}