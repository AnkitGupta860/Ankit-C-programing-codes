//WAP to input an array of N number of elements and find the largest element in that array.
#include<stdio.h>
int main()
{
    int n,max,count1=0,min,count2=0;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i,s;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            count1++;
        }    
        else{
            max=a[0];
            count1++;
        }    
    }
    min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            count2++;
        }
        else{
            min=a[0];
            count2++;
        }
    }
    a[count1]=max;
    a[count2]=min;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    
}    