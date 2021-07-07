#include<stdio.h>
int sorting(int *p, int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }        
    }
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));

}
int main()
{
    int n,i;
    printf("Enter thge length of the array : ");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    sorting(A,n);
}   