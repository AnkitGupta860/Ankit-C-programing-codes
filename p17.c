#include<stdio.h>
int main()
{
    int n,b=0,count1=0,count2=0,count3=0;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i,s;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>b)
            count1++;
        else if(a[i]<b)
            count2++;
        else
            count3++;

    }
    printf("For positive count : %d\n",count1);
    printf("For negative count : %d\n",count2);
    printf("For Zero count : %d\n",count3);

}    
