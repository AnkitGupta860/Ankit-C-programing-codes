#include<stdio.h>
int binary_search(int a[],int element,int size)
{
    int low,mid,high;
    low=0;
    high = size-1;
    while(low<=high){
    mid=(low+high)/2;
    if(a[mid] == element)
        return mid;
    if(a[mid]<element)
        low = mid+1;
    else
        high = mid-1;
    }
    return -1;
}
int main()
{
    int a[]={-1,0,1,2,3,4,5,6,756,865,986};
    int size=sizeof(a)/sizeof(int);
    int element=6;
    int search=binary_search(&a,element,size);
    printf("Element at = %d",search);

}