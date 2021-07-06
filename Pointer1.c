#include<stdio.h>
int deletion(int *p)
{
    int i,d,j;
    printf("enter number that you want to delete : ");
    scanf("%d",&d);
    for(i=0;i<8;i++)
    {
        if(*(p+i)==d)
            for(j=i;j<8;j++)
                *(p+j)=*(p+j+1);       
    }
    printf("After deletion array will be : ");
    for(i=0;i<7;i++)
    {
        printf("%d ",*(p+i));
    }
}
int search(int *p)
{
    int i,s;
    printf("enter number that you want to search : ");
    scanf("%d",&s);
    for(i=0;i<8;i++)
    {
        if((*p+i)==s)
            printf("Found\n");
            break;
    }
}
int odd_number(int *p)
{
    int n=0,i;
    for(i=0;i<8;i++)
    {
        if(*(p+i)%2!=0)
            n++;
    }
    printf("Odd numbers are = %d\n",n);
}
int even_number(int *p)
{
    int n=0,i;
    for(i=0;i<8;i++)
    {
        if(*(p+i)%2==0)
            n++;
    }
    printf("Even numbers are = %d\n",n);
}
int main()
{
    int A[8],i;
    for(i=0;i<8;i++)
        scanf("%d",&A[i]);
    even_number(A);
    odd_number(A);
    search(A);    
    deletion(A);
}