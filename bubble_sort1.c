#include<stdio.h>
void printArray(int * A ,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(A+i));
    }
    printf("\n");
}
void Bubblesort(int *A,int n)
{
    int temp,isSorted=0;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        isSorted = 1;
        printf("Number of pass is = %d\n",i+1);
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
        if(isSorted)
        return;
    }
}
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    printArray(&A,n);
    Bubblesort(&A,n);
    printArray(&A,n);
}