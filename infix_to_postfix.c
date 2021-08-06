#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack * ptr)
{
    if(ptr->top<0)
        return 1;
    return 0;    
}
int isFull(struct stack * ptr)
{
    if(ptr->top==ptr->size-1)
        return 1;
    return 0;    
}
void push(struct stack * ptr,int val)
{
    if(isFull(ptr)==1)
        printf("Stack Overflow\n");
    else
        {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
}
int pop(struct stack * ptr)
{
    if(isEmpty(ptr)==1){
        printf("stack underflow\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int stackTop(struct stack * sp)
{
    return sp->arr[sp->top];
}
int isOperator(char p)
{
    if(p=='+' || p=='-' || p=='*' || p=='/')
    {
        return 1;
    }
    return 0;
}
int precedence(char p)
{
    if(p=='*' || p=='/')
        return 3;
    else if(p=='+' || p=='-')
        return 2;
    else
        return 0;        
}
char * infixToPostfix(char * infix)
{
    struct stack * sp =(struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char)*sp->size);
    char * postfix = (char *)malloc(sizeof(char)*(strlen(infix)+1));
    int i=0;
    int j=0;
    while(infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i])>precedence(sp->arr[sp->top]))
            {
                push(sp,infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char * infix = "a-b";
    printf("infix to postfix = %s",infixToPostfix(infix));


}