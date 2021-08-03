#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void Traversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct Node * ptr)
{
    if(ptr == NULL)
    {
        printf("stack underflow\n");
        return 1;
    }
    return 0;
}
int isFull(struct Node * ptr)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("stack overflow\n");
        return 1;
    }
    return 0;    
}
struct Node * push(struct Node * top,int x)
{
    if(isFull(top))
    {
        printf("stack overflow\n");
    }
    else
    {
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct Node * top)
{
    if(isEmpty(top))
        printf("stack underflow\n");
    else
    {

        struct Node * n = top;
        top = top->next;
        int val = n->data;
        free(n);
        return val;
    }    
}
int main()
{
    int element;
    struct Node * top = NULL;
    printf("After Pusing \n");
    top = push(top,5);
    top = push(top,87);
    top = push(top,90);
    Traversal(top);
    element = pop(top);
    printf("After popping out element is %d\n",element);
    
}