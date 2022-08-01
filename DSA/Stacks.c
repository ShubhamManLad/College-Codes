#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct STACK { //int jaisa hai data type hai
    int top;
    unsigned capacity;
    int *array;
};

struct STACK *createStack (unsigned n) //struct STACK is return type --> returns tthe address of the struct STACK.
{
    struct STACK *stack;
    stack=(struct STACK*)malloc(sizeof(struct STACK));
    stack ->top=-1;
    stack ->capacity=n;
    stack ->array=(int*)malloc(sizeof(int));
    return stack;
}

int isFULL(struct STACK *stack){
    return stack ->top==stack ->capacity -1;
}

int isEMPTY(struct STACK *stack){
    return stack ->top==-1;
}

void PUSH (struct STACK *stack, int item){
    if (isFULL(stack)){
        printf("Can't add anymore items to the stack\n");
        return;
    }
    else{
        stack ->array[++stack->top]=item; //++top === stack-> top
        printf("%d pushed inn the stack at %d position\n",item,stack->top);
        return; 
    }
}
void TOP (struct STACK *stack){
    printf("%d is the top item of stack\n",stack->array[stack->top]);
}

void POP (struct STACK *stack){
    if (isEMPTY(stack)){
        printf("No items there to remove\n");
        return;
    }
    else{
        stack->array[stack->top--]; // 1 2 3 4 5 8
        TOP(stack);
        printf("%d was removed from top position\n",stack->array[stack->top+1]);
        return;
    }
}


int main(){
    int n;
    scanf("%d",&n);
    struct STACK *stack=createStack(n);
    for(int i=0;i<n;i++){
        int item;
        scanf("%d",&item);
        PUSH(stack,item);
    }
    POP(stack);
    TOP(stack);
    PUSH(stack,56);
    for(int i=0;i<=stack->top;i++){
        printf("%d\n",stack->array[i]);
    }
    PUSH(stack,797);
}
