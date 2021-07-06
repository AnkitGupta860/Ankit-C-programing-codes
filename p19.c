#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,count=0;
    float var,stan,mean,p=0;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i,s;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        sum+=a[i];
        count++;
    }
    mean=sum/count;
    for(i=0;i<n;i++)
    {
        p+=pow((a[i]-mean),2);

    }
    var=p/count;
    stan=pow(var,0.5);
    printf("%f",stan);
}    


    
    
