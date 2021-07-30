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
        ptr=ptr->next;
    }
}
struct Node * deleteThefirst(struct Node * head)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node * DeleteAtIndex(struct Node * head,int index)
{
    struct Node * p = head;
    struct Node * q = p->next;
    for(int i=0;i<index-1;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct Node * DeletionAtEnd(struct Node * head)
{
    struct Node * p = head;
    struct Node * q = p->next;
    for(int i=0;i!=NULL;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct Node * DeleteAtValue(struct Node * head,int value)
{
    struct Node * p = head;
    struct Node * q = p->next;
    while(q->next!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data = value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Before deletion\n");
    Traversal(head);
    //head = deleteThefirst(head);
    //head = DeleteAtIndex(head,2);
    //head = DeletionAtEnd(head);
    head = DeleteAtValue(head,2);
    printf("After deletion\n");
    Traversal(head);
}