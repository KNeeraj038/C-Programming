#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char letter = 'A';

    printf("\n%c", letter);
    printf("\n%d", letter);

    // String literal, stored as a read only data.
    char *name = "Test_Name";
    // *(name+1) = 'N'; // it will give segmentation fault.
    printf("\n%c", *(name+1));    


    //

    printf("\n");
    return EXIT_SUCCESS;
}