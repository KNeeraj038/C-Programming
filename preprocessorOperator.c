#include<stdio.h>

#define num1 10
#define num2 20

// Paramaterized macro.
#define add_num(a,b)(a+b)

// Stringizer(#) and continuation (\)
#define printValue(val)\
"output of " #val " is"

// Tokenizer(##)
#define concat(a,b) a##b

int main()
{
    int res = add_num(num1, num2);
    printf("%s %d",printValue(addition),res);

    int xy = 100;
    printf("\n%d",concat(x,y));

    printf("\n");
    return 0;
}