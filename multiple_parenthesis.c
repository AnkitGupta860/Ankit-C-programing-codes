#include<stdio.h>
#include<stdlib.h>
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
void push(struct stack * ptr,char val)
{
    if(isFull(ptr)==1)
        printf("Stack Overflow\n");
    else
        {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
}
char pop(struct stack * ptr)
{
    if(isEmpty(ptr)==1){
        printf("stack underflow\n");
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int match(int a, int b)
{
    if(a=='(' && b=='(')
        return 1;
    if(a=='[' && b=='[')
        return 1;
    if(a=='{' && b=='{')
        return 1;
}
int paranthesisMatching(char * exp)
{
    struct stack * sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_element;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        {
            push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(isEmpty(sp))
                return 0;
            else
            {
                popped_element = pop(sp);
                if(!match(popped_element,exp[i]))
                    return 0;
            }

        }
    }
    if(isEmpty(sp))
        return 1;
    else
        return 0;
}
int main()
{
    char * exp = "{(8-2)]*(8*2)}";
    if(paranthesisMatching(exp))
        printf("Matched\n");
    else
        printf("Not Matched\n");


}