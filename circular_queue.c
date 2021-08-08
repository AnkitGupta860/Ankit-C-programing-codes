#include<stdio.h>
#include<stdlib.h>
struct CircularQueue
{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(struct CircularQueue * q)
{
    if((q->r+1)%(q->size)==q->f)
        return 1;
    return 0;    
}
int isEmpty(struct CircularQueue * q)
{
    if(q->r == q->f)
        return 1;
    return 0;    
}
int dequeue(struct CircularQueue * q)
{
    int a = -1;
    if(isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}
void enqueue(struct CircularQueue * q,int val)
{
    if(isFull(q))
    {
        printf("Queue is overflow\n");
    }
    else{
        q->r = (q->r+1)%(q->size);
        q->arr[q->r] = val;
        printf("Enque element is %d\n",val);
    }
}
int main()
{
    struct CircularQueue q;
    q.size = 3;
    q.f = q.r = 0;
    q.arr = (int *)malloc(sizeof(int)*q.size);
    enqueue(&q,10);
    enqueue(&q,3);
    enqueue(&q,1);
    if(isFull(&q))
        printf("Full\n");
    else
        printf("Not Full\n");    
}