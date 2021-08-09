#include<stdio.h>
#include<stdlib.h>

struct Node * f = NULL;
struct Node * r = NULL;

struct Node
{
    int data;
    int r;
    int f;
    struct Node * next;
};
void Traversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue(int val)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("Queue is overflow\n");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL)
            f=r=n;
        else
            {
                r->next = NULL;
                r=n;
            }
    }
}
int dequeue()
{
    int val = -1;
    struct Node * n = f;
    if(f==NULL)
        printf("Queue is underflow\n");
    else
    {
        f = f->next;
        val = f;
        free(n);
    }
    return val;    
}
int main()
{   
    Traversal(f);
    enqueue(5);
    enqueue(6);
    enqueue(7);
}