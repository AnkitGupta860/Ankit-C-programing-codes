#include<stdio.h>
#include<stdlib.h>
struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void create_array(struct MyArray *p,int Tsize ,int Usize)
{
    (*p).total_size = Tsize;
    (*p).used_size = Usize;
    (*p).ptr = (int *)malloc(Tsize*sizeof(int)); 
}
void setVal(struct MyArray *p)
{
    int n;
    for(int i=0;i<(*p).used_size;i++)
    {
        printf("Enter Element %d : ",i);
        scanf("%d",&n);
        (*p).ptr[i]=n;

    }
}
void show(struct MyArray *p)
{
    for(int i=0;i<(*p).used_size;i++)
    {
        printf("%d\n",(*p).ptr[i]);
    }
}
int main()
{
    struct MyArray marks;
    create_array(&marks,10,2);
    printf("Set Elements\n");
    setVal(&marks);
    printf("Get Elements\n");
    show(&marks);
}