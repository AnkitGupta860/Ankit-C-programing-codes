#include<stdio.h>
void printArray(int *A,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selectionSort(int *A,int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min = j;
            }
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}
int main()
{
    int A[] = {3,1,7,5,8,5};
    int n = 6;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);

}