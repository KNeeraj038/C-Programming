#include<stdio.h>

int mul(int a, int b, int c){
    return a*b*c;
}

void main(){
    int (*function_pointer)(int , int , int);
    // function_pointer = mul;
    function_pointer = &mul;
    
    printf("\nProduct: is %d \n", function_pointer(2,3,4));
}

/*OPTIONS
1. Product: is 24 
2. Run time error
3. Nothing
4. Varies


<Correct answer> is 1
*/

// Explaination.
// No, there is no difference, since function can be implicitly converted to pointer to function. Relevant quote from standard (N3376 4.3/1).

// An lvalue of function type T can be converted to a prvalue of type “pointer to T.” The result is a pointer to the function.