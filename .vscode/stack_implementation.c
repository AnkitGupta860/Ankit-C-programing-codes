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
    if(ptr->top < 0 )
        return 1;
    return 0;    
}
int isFull(struct stack * ptr)
{
    if(ptr->top == ptr->size-1)
        return 1;
    return 0;    
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->arr[0] = 5;
    s->top++;
    if(isEmpty(s))
        printf("stack is empty\n");
    else
        printf("stack is not empty\n");
}

