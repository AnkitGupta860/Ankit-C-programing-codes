#include<stdio.h>
int main()
{
    int n,i,j,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s*=2;
        if(n==s)
        {
            printf("%d is in power of 2",n);
            break;
        }
        else
            printf("%d is not in power of 2",n);
    }
}