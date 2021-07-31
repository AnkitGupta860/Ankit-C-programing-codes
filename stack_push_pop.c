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
int main()
{
    struct stack * s =(struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int) * s->size);
    printf("%d\n",isFull(s));
    printf("%d\n",isEmpty(s));
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    printf("%d\n",isFull(s));
    printf("%d\n",isEmpty(s));
    printf("Element is %d\n",pop(s));


}