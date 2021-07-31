#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * prev;
    struct Node * next;
};
void Traversal(struct Node * head)
{
    struct Node * ptr = head;
    do
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=NULL);
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    Traversal(head);
}