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
void enqueueF(int val)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("Queue is overflow\n");
    }
    else{
        n->data = val;
        if(f==NULL)
            f=r=n;
        else
            {
                n->next = f->next;
                f=n;
            }
    }
}
void enqueueR(int val)
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
int dequeueF()
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
    enqueueR(5);
    enqueueR(6);
    enqueueR(7);
}