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
void insertionSort(int *A, int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        int key = A[i];
        int j = i-1;
        while(A[j]>key && j>=0)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=key;
    }
}
int main()
{
    int A[] = {3,1,7,5,8,5};
    int n = 6;
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);

}