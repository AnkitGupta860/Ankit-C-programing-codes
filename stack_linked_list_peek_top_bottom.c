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
int isEmpty(struct Node * top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Node * top)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
struct Node * push(struct Node * top,int data)
{
    if(isFull(top))
    {
        printf("stack overflow\n");
    }
    else
    {
        struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop(struct Node * top)
{
    if(isEmpty(top))
    {
        printf("stack underflow\n");
    }
    else
    {
        struct Node * n = top;
        top = top->next;
        int val = n->data;
        free(n);
        return val;
    }
}
int peek(struct Node * top,int pos)
{
    struct Node * ptr = top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL)
    {
        return ptr->data;
    }
    

}
int top1(struct Node * top)
{
    if(isEmpty(top))
    {
        printf("stack underflow\n");
        return 0;
    }
    else
    {
        return top->data;
    }
}
int main()
{
    struct Node * top = NULL;
    top = push(top,5);
    top = push(top,6);
    top = push(top,7);
    top = push(top,8);
    Traversal(top);
    //int t=pop(top);
    //printf("%d\n",t);
    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is : %d\n", i, peek(top,i));
    }
    int p = top1(top);
    printf("%d\n",p);
}