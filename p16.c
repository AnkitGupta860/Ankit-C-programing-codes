#include<stdio.h>
int main()
{
    int n,sum=0,count=0;
    float avg;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i,s;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
        count++;
    }
    avg=sum/count;
    printf("Sum is %d\n",sum);
    printf("Avg is %f\n",avg);
}   