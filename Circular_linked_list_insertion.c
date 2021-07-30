#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void CircularTraversal(struct Node * head)
{
    struct Node * ptr = head;
    do{
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
struct Node * insertAtFirst(struct Node * head , int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head->next;
    while(p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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

    head->data=23;
    head->next=second;

    second->data=24;
    second->next=third;

    third->data=25;
    third->next=head;
    printf("Before insertion\n");
    CircularTraversal(head);
    head = insertAtFirst(head,56);
    printf("After insertion\n");
    CircularTraversal(head);

}