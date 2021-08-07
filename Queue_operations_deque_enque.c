#include<stdio.h>
struct Queue
{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(struct Queue * q)
{
    if(q->r == q->size-1)
        return 1;
    return 0;    
}
int isEmpty(struct Queue * q)
{
    if(q->r == q->f)
        return 1;
    return 0;    
}
int dequeue(struct Queue * q)
{
    int a = -1;
    if(isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
void enqueue(struct Queue * q,int val)
{
    if(isFull(q))
    {
        printf("Queue is overflow\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enque element is %d\n",val);
    }
}
int main()
{
    struct Queue q;
    q.size = 3;
    q.f = q.r = -1;
    q.arr = (int *)malloc(sizeof(int)*q.size);
    enqueue(&q,10);
    enqueue(&q,3);
    enqueue(&q,1);
    if(isFull(&q))
        printf("Full\n");
    else
        printf("Not Full\n");    
}