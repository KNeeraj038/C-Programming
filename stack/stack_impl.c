#include<stdio.h>
#include<stdlib.h>


typedef struct{
    int top;
    int size;
    int *arr;
} stack;

stack* create_stack(int size)
{
    stack *newStack = (stack*)malloc(size * sizeof(stack));
    newStack->size = size;
    newStack->top =-1;
    newStack->arr =  malloc(size*sizeof(newStack->arr));
    return newStack;
}


int is_empty(stack *Stack)
{
    return Stack->top == -1;
}

int is_full(stack *Stack )
{
    return Stack->top == Stack->size-1;
}

void push_data(stack *Stack, int data)
{
    if(is_full(Stack)){
        return;
    }
    Stack->arr[++Stack->top] = data;
    // printf("Item pushed: %d", data);
}

int pop_data(stack *Stack)
{
    if(is_empty(Stack)){
        return -1;
    }
    return Stack->arr[Stack->top--];
}

void print_stack(stack *Stack)
{
    int i=0;
    int size = Stack->top;
    printf("Size:[%d]  \n", size);
    for(i=0;i<Stack->top;i++)
    {
        printf("--> %d ",Stack->arr[size--]);
    }
}
int main()
{   
    stack *Stack = create_stack(10);

    push_data(Stack, 10);
    push_data(Stack, 3);
    push_data(Stack, 5);
    push_data(Stack, 40);
    push_data(Stack, 77);
    push_data(Stack, 75);
    push_data(Stack, 7);
    push_data(Stack, 72);
    push_data(Stack, 734);
    push_data(Stack, 72);
    print_stack(Stack);

    pop_data(Stack);
    pop_data(Stack);
    pop_data(Stack);
    pop_data(Stack);
    pop_data(Stack);
    pop_data(Stack);
    pop_data(Stack);

    print_stack(Stack);    

    printf("\n");
    return EXIT_SUCCESS;
}