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
struct Node * InsertAtTheFirst(struct Node * head , int data) 
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
}
struct Node * insertAtindex(struct Node * head,int data,int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node * insertAtend(struct Node * head,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data=data;
    while(p->next!=NULL)
    {
        p = p->next;
    } 
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node * insertAfterNode(struct Node * head,struct Node * prev,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prev->next;
    prev->next = ptr;

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

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    printf("Before insertion\n");
    Traversal(head);
    //head = InsertAtTheFirst(head,5);
    //Traversal(head);
    //head = insertAtindex(head,5,2);
    //Traversal(head);
    printf("After insertion\n");
    //head = insertAtend(head,5);
    //Traversal(head);
    head = insertAfterNode(head,second,5);
    Traversal(head);   
}