#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i,s;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}